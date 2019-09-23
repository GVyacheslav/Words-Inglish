FlagWW = g++ -Wall -Werror -std=c++11
Target = output
Create = mkdir -p build/src
Createtest = mkdir -p build/test

all:bin/Dictionary

folder: 
	$(Create)

foldertest:
	$(Createtest)

bin/Dictionary: folder build/src/main.o build/src/read.o build/src/comparison.o build/src/menu.o
	$(FlagWW) build/src/main.o build/src/read.o build/src/comparison.o build/src/menu.o -o bin/Dictionary

build/src/main.o: src/main.cpp
	$(FlagWW) -c src/main.cpp -o build/src/main.o

build/src/read.o: src/read.cpp
	$(FlagWW) -c src/read.cpp -o build/src/read.o

build/src/comparison.o: src/comparison.cpp
	$(FlagWW) -c src/comparison.cpp -o build/src/comparison.o

build/src/menu.o: src/menu.cpp
	$(FlagWW) -c src/menu.cpp -o build/src/menu.o


test:bin/test

bin/test: foldertest build/test/test.o build/test/read.o
	g++ build/test/test.o build/test/read.o -o bin/Test -Wall -Werror -std=c++11

build/test/test.o: test/test.cpp
	g++ -Wall -Werror -c test/test.cpp -o build/test/test.o -Wall -Werror -std=c++11

build/test/read.o: src/read.cpp
	g++ -Wall -Werror  -c src/read.cpp -o build/test/read.o -Wall -Werror -std=c++11

.PHONY: clean

clean:

	rm -rf build/src/*.o
	rm -rf build/test/*.o