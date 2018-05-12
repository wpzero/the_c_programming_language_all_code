CC=gcc
OBJ=printd.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
printd: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.DEFAULT_GOAL := printd
.PHONY: clean

clean:
	-rm -rf $(OBJ) printd
