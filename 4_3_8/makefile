CC=gcc
OBJ=main.o atof.o gtline.o opstack.o
IDIR= ./
CFLAGS=-I$(IDIR) -g
_DEPS=atof.h gtline.h opstack.h
DEPS=$(patsubst %,$(IDIR)/%,$(_DEPS))

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
cal: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.DEFAULT_GOAL := cal
.PHONY: clean

clean:
	-rm -rf $(OBJ) cal
