CC=gcc
OBJ=itoa.o

%.0: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
itoa: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.DEFAULT_GOAL := itoa
.PHONY: clean

clean:
	-rm -rf itoa $(OBJ)
