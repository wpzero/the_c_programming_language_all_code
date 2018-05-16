CC=gcc
OBJ=expr.o
CFLAGS=-g


%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
expr: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.DEFAULT_GOAL := expr
.PHONY: clean

clean:
	-rm -rf $(OBJ) expr
