CC=gcc
OBJ=itoa.o
CFLAGS=-g

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
itoa: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
.DEFAULT_GOAL := itoa
.PHONY: clean

clean:
	-rm -rf $(OBJ) itoa
