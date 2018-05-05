CC=gcc
OBJ=reverse.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
reverse: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.DEFAULT_GOAL := reverse
.PHONY: reverse

clean:
	-rm -rf $(OBJ) reverse
