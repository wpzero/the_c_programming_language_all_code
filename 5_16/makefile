CC=gcc
OBJ=tail.o
CFLAGS=-g

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
tail: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.DEFAULT_GOAL := tail

.PHONY: clean

clean:
	-rm -rf $(OBJ) tail
