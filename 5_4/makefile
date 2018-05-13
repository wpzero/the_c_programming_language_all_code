CC=gcc
OBJ=alloc.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
alloc: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
.DEFAULT_GOAL := alloc
.PHONY: clean
clean:
	-rm -rf $(OBJ) alloc
