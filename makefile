FlagWW = g++ -Wall -Werror=c++11-compat
Target = output
Create = mkdir -p build/src

all:bin/Dictionary

folder: 
	$(Create)

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


.PHONY: clean

clean:

	rm -rf build/src/*.o
	rm -rf bin/*.o
