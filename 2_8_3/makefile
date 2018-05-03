CC=gcc
OBJ=any.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
any: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.DEFAULT_GOAL := any
.PHONY: clean

clean:
	-rm -rf $(OBJ) any
