CC=gcc
OBJ=bsearch.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
bsearch: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.DEFAULT_GOAL := bsearch
.PHONY: clean

clean:
	-rm -rf $(OBJ) bsearch
