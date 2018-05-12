CC=gcc
OBJ=main.o getint.o getch.o
IDIR= ./
CFLAGS= -I$(IDIR)
_DEPS= getint.h getch.h
DEPS=$(patsubst %,$(IDIR)/%,$(_DEPS))

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
getint: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
.DEFAULT_GOAL := getint
.PHONY: clean
clean:
	-rm -rf $(OBJ) getint
