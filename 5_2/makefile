CC=gcc
OBJ=main.o getch.o getfloat.o
IDIR= ./
CFLAGS= -I$(IDIR)
_DEPS= getfloat.h getch.h
DEPS=$(patsubst %,$(IDIR)/%,$(_DEPS))

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
getfloat: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
.DEFAULT_GOAL := getfloat
.PHONY: clean
clean:
	-rm -rf $(OBJ) getfloat
