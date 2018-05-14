CC=gcc
OBJ=wpstrcmp.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
wpstrcmp: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.DEFAULT_GOAL := wpstrcmp
.PHONY: clean
clean:
	-rm -rf $(OBJ) wpstrcmp
