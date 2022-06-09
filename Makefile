all:
	g++ ./src/main.cpp ./src/configReader.cpp ./src/headerPart1.cpp -I ./include -lcppunit -o ./bin/test

clean:
	$(RM) ./bin/test
