import Vector::*;
import Complex::*;

import IFFTCommon::*;
import FIFOF::*;

(* synthesize *)
module mkIFFTCombinational(IFFT);
    FIFOF#(DataType) inFIFO <- mkFIFOF;
    FIFOF#(DataType) outFIFO <- mkFIFOF;
    Vector#(NumStages, Vector#(BflysPerStage, Bfly4)) bfly <- replicateM(replicateM(mkBfly4));
    
    // You can create additional registers or FIFOs here

    function DataType stage_f(StageIdx stage, DataType stage_in);
        DataType stage_temp, stage_out;
        for (FftIdx i = 0; i < fromInteger(valueOf(BflysPerStage)); i = i + 1)  begin
            FftIdx idx = i * 4;
            Vector#(4, ComplexData) x;
            Vector#(4, ComplexData) twid;
            for (FftIdx j = 0; j < 4; j = j + 1 ) begin
                x[j] = stage_in[idx+j];
                twid[j] = getTwiddle(stage, idx+j);
            end
            let y = bfly[stage][i].bfly4(twid, x);

            for(FftIdx j = 0; j < 4; j = j + 1 ) begin
                stage_temp[idx+j] = y[j];
            end
        end

        stage_out = permute(stage_temp);

        return stage_out;
    endfunction
  
    //TODO: Write the rule(s) here
   rule stageOne (True);
	DataType f1 = stage_f(0, inFIFO.first());
	DataType f2 = stage_f(1, f1 );
	DataType f3 = stage_f(2, f2 );
	outFIFO.enq(f3);
	inFIFO.deq();
   endrule

    method Action enq(DataType in);
        inFIFO.enq(in);
    endmethod
  
    method ActionValue#(DataType) deq;
        outFIFO.deq;
        return outFIFO.first;
    endmethod
endmodule

(* synthesize *)
module mkIFFTFolded(IFFT);
    FIFOF#(DataType) inFIFO <- mkFIFOF;
    FIFOF#(DataType) outFIFO <- mkFIFOF;
    Vector#(16, Bfly4) bfly <- replicateM(mkBfly4);

    // You can create additional registers or FIFOs here
    Reg#(StageIdx) counter <- mkReg(0);
    FIFOF#(DataType) f1 <- mkFIFOF;
   // FIFOF#(DataType) f2 <- mkFIFOF;
   // FIFOF#(DataType) f3 <- mkFIFOF;

    function DataType stage_f(StageIdx stage, DataType stage_in);
        DataType stage_temp, stage_out;
        for (FftIdx i = 0; i < fromInteger(valueOf(BflysPerStage)); i = i + 1)  begin
            FftIdx idx = i * 4;
            Vector#(4, ComplexData) x;
            Vector#(4, ComplexData) twid;
            for (FftIdx j = 0; j < 4; j = j + 1 ) begin
                x[j] = stage_in[idx+j];
                twid[j] = getTwiddle(stage, idx+j);
            end
            let y = bfly[i].bfly4(twid, x);

            for(FftIdx j = 0; j < 4; j = j + 1 ) begin
                stage_temp[idx+j] = y[j];
            end
        end

        stage_out = permute(stage_temp);

        return stage_out;
    endfunction
  
    //TODO: Write the rule(s) here
    rule first (counter == 0);
	    f1.enq(stage_f(counter, inFIFO.first()));
	    inFIFO.deq();
	    counter <= counter + 1;
    endrule

    rule second (counter == 1);
      DataType first = f1.first(); 
      f1.deq();
	    f1.enq(stage_f(counter, first));
	    // f1.deq();
	    counter <= counter + 1;
    endrule

    rule third (counter == 2);
      DataType first = f1.first(); 
      f1.deq();
	    //f1.enq(stage_f(counter, first));
	    counter <= 0;
      outFIFO.enq(stage_f(counter, first));
    endrule

/*    rule last (counter == 3);
	outFIFO.enq(f3.first());
	f3.deq();
	counter <= 0;
    endrule
*/
    method Action enq(DataType in);
        inFIFO.enq(in);
    endmethod
  
    method ActionValue#(DataType) deq;
        outFIFO.deq;
        return outFIFO.first;
    endmethod
endmodule

(* synthesize *)
module mkIFFTElasticPipeline(IFFT);
    FIFOF#(DataType) inFIFO <- mkFIFOF;
    FIFOF#(DataType) outFIFO <- mkFIFOF;
    Vector#(3, Vector#(16, Bfly4)) bfly <- replicateM(replicateM(mkBfly4));

    // You can create additional registers or FIFOs here
    FIFOF#(DataType) f1 <- mkFIFOF;
    FIFOF#(DataType) f2 <- mkFIFOF;


    function DataType stage_f(StageIdx stage, DataType stage_in);
        DataType stage_temp, stage_out;
        for (FftIdx i = 0; i < fromInteger(valueOf(BflysPerStage)); i = i + 1)  	begin
            FftIdx idx = i * 4;
            Vector#(4, ComplexData) x;
            Vector#(4, ComplexData) twid;
            for (FftIdx j = 0; j < 4; j = j + 1 ) begin
                x[j] = stage_in[idx+j];
                twid[j] = getTwiddle(stage, idx+j);
            end
            let y = bfly[stage][i].bfly4(twid, x);

            for(FftIdx j = 0; j < 4; j = j + 1 ) begin
                stage_temp[idx+j] = y[j];
            end
        end

        stage_out = permute(stage_temp);

        return stage_out;
    endfunction
  
    //TODO: Write the rule(s) here
    rule stageOne;
	f1.enq(stage_f(0,inFIFO.first()));
	inFIFO.deq();
    endrule

    rule stageTwo (f1.notEmpty());
	f2.enq(stage_f(1,f1.first()));
	f1.deq();
    endrule

    rule stageThree (f2.notEmpty());
	f2.deq();
	outFIFO.enq(stage_f(2,f2.first()));
    endrule
 
    method Action enq(DataType in);
        inFIFO.enq(in);
    endmethod
  
    method ActionValue#(DataType) deq;
        outFIFO.deq;
        return outFIFO.first;
    endmethod
endmodule
