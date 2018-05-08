CC=gcc
OBJ=atof.o gtline.o main.o
IDIR = ./
CFLAGS=-I$(IDIR)

_DEPS=atof.h gtline.h
DEPS=$(patsubst %,$(IDIR)/%,$(_DEPS))

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
sum: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.DEFAULT_GOAL := sum
.PHONY: clean

clean:
	-rm -rf $(OBJ) sum
