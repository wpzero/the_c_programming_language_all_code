CC=gcc
OBJ=bitcount.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
bitcount: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.DEFAULT_GOAL := bitcount
.PHONY: clean

clean:
	-rm -rf $(OBJ) bitcount
