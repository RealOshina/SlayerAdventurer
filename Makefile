CC=gcc
CFLAGS=-Wall -Wextra -I./src

SRC=$(shell find src -name "*.c")
OUT=build/game

all:
	mkdir -p build
	$(CC) $(CFLAGS) $(SRC) -o $(OUT)

run:
	./$(OUT)

clean:
	rm -rf build
