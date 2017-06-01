compile:
	mkdir -p buildDir
	bsc -u -sim -bdir buildDir -info-dir buildDir -simdir buildDir -vdir buildDir -aggressive-conditions TestBench.bsv

comb: compile
	bsc -sim -e mkTbIFFTCombinational -bdir buildDir -info-dir buildDir -simdir buildDir -o simComb
	
fold: compile
	bsc -sim -e mkTbIFFTFolded -bdir buildDir -info-dir buildDir -simdir buildDir -o simFold
	
pipe: compile
	bsc -sim -e mkTbIFFTElasticPipeline -bdir buildDir -info-dir buildDir -simdir buildDir -o simPipe

all: comb fold pipe

clean:
	rm -rf buildDir sim*

.PHONY: clean all comb fold pipe compile
.DEFAULT_GOAL := all
