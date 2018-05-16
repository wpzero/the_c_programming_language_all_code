CC=gcc
OBJ=grep.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
grep: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.DEFAULT_GOAL := grep
.PHONY: clean

clean:
	-rm -rf $(OBJ) grep
