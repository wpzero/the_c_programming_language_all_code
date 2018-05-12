CC=gcc
OBJ=swap.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
swap: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.DEFAULT_GOAL := swap
.PHONY: clean
clean:
	-rm -rf $(OBJ) swap
