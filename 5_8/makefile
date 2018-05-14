CC=gcc
OBJ=wpstrend.o
CFLAGS=-g

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
wpstrend: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.DEFAULT_GOAL := wpstrend
.PHONY: clean

clean:
	-rm -rf $(OBJ) wpstrend
