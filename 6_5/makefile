CC=gcc
OBJ=keywords.o
CFLAGS=-g

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
keywords: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.DEFAULT_GOAL := keywords
.PHONY: clean

clean:
	-rm -rf $(OBJ) keywords
