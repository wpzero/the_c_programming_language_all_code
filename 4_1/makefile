CC=gcc
IDIR = ./
CFLAGS=-I$(IDIR)

_DEPS=gtline.h strindex.h
DEPS=$(patsubst %,$(IDIR)/%,$(_DEPS))

OBJ=gtline.o strindex.o main.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

grep: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.DEFAULT_GOAL := grep

.PHONY: clean

clean:
	-rm -rf $(OBJ) grep
