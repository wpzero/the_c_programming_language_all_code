CC=gcc
OBJ=main.o atof.o getch.o getop.o opstack.o
IDIR= ./
CFLAGS=-I$(IDIR) -lm
_DEPS=atof.h getch.h getop.h opstack.h
DEPS=$(patsubst %,$(IDIR)/%,$(_DEPS))

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
cal: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.DEFAULT_GOAL := cal
.PHONY: clean

clean:
	-rm -rf $(OBJ) cal
