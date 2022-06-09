all:
	g++ ./src/main.cpp ./src/configReader.cpp ./src/headerPart1.cpp -I ./include -o ./bin/test

clean:
	$(RM) ./bin/test
