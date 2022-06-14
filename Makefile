all:
	g++ ./src/main.cpp \
		./src/configReader.cpp \
		./src/headerPart1.cpp \
		./src/utils.cpp \
		-I ./include \
		-o ./bin/compress
	
	g++ ./test/TestCompressMain.cpp \
		./test/TestUtils.cpp \
		./src/utils.cpp \
		-I ./include/ \
		-I /home/krsc0813/anaconda3/envs/gwas-compress/include/ \
		-L /home/krsc0813/anaconda3/envs/gwas-compress/lib \
		-lcppunit \
		-o ./bin/testc	

test:
	chmod +x ./bin/compress
	./compressTest
	
clean:
	$(RM) ./bin/compress ./bin/testc  
