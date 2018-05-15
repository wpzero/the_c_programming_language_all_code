CC=gcc
OBJ=main.o lines.o qsort.o
IDIR = ./
CFLAGS=-I$(IDIR)

_DEPS=qsort.h lines.h
DEPS=$(patsubst %,$(IDIR)/%,$(_DEPS))

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
wpsort: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.DEFAULT_GOAL := wpsort
.PHONY: clean

clean:
	-rm -rf $(OBJ) wpsort
