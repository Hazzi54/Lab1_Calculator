.PHONY: clean

all: build main prog_test

main: build/main.o build/add.o build/sub.o build/mul.o build/div.o
	gcc -Wall -Werror build/main.o build/add.o build/sub.o build/mul.o build/div.o -o main

build/add.o: src/add.c src/func.h
	gcc -Wall -Werror -c src/add.c -o build/add.o

build/sub.o: src/sub.c src/func.h
	gcc -Wall -Werror -c src/sub.c -o build/sub.o

build/mul.o: src/mul.c src/func.h
	gcc -Wall -Werror -c src/mul.c -o build/mul.o

build/div.o: src/div.c src/func.h
	gcc -Wall -Werror -c src/div.c -o build/div.o

build/main.o: src/main.c src/func.h
	gcc -Wall -Werror -c src/main.c -o build/main.o

build/test.o: src/test.c
	gcc -I server -c src/test.c -o build/test.o

prog_test: build/test.o build/add.o
	gcc build/test.o build/add.o -o prog_test

build:
	mkdir build

clean:
	rm -rf build main prog_test
