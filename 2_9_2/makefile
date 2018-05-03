CC=gcc
OBJ=invert.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
invert: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.DEFAULT_GOAL := invert
.PHONY: clean

clean:
	-rm -rf $(OBJ) invert
