CC=gcc
OBJ=qsort.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
qsort: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.DEFAULT_GOAL := qsort
.PHONY: clean

clean:
	-rm -rf $(OBJ) qsort
