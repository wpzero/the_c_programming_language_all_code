CC=gcc
OBJ=shellsort.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
shellsort: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.DEFAULT_GOAL := shellsort
.PHONY: clean

clean:
	-rm -rf $(OBJ) shellsort
