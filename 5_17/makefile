CC=gcc
OBJ=main.o numcmp.o qsort.o
IDIR = ./
CFLAGS=-I$(IDIR) -g

_DEPS=qsort.h numcmp.h
DEPS=$(patsubst %,$(IDIR)/%,$(_DEPS))

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
wpsort: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.DEFAULT_GOAL := wpsort
.PHONY: clean

clean:
	-rm -rf $(OBJ) wpsort
