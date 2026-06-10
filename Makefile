CC=gcc
CFLAGS=-Wall -Wextra -I./src

SRC := $(wildcard src/*.c src/*/*.c)
OUT=build/game

all:
	mkdir -p build
	$(CC) $(CFLAGS) $(SRC) -o $(OUT)

run: all
	./$(OUT)

clean:
	rm -rf build
