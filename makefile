FlagWW = g++ -Wall -Werror
Target = output

all:bin/WordsEng

bin/WordsEng: build/src/main.o build/src/read.o build/src/comparison.o
	$(FlagWW) build/src/main.o build/src/read.o build/src/comparison.o -o bin/WordsEng

build/src/main.o: src/main.cpp
	$(FlagWW) -c src/main.cpp -o build/src/main.o

build/src/read.o: src/read.cpp
	$(FlagWW) -c src/read.cpp -o build/src/read.o

build/src/comparison.o: src/comparison.cpp
	$(FlagWW) -c src/comparison.cpp -o build/src/comparison.o

.PHONY: clean

clean:

	rm -rf build/src/*.o
	rm -rf bin/*.o
