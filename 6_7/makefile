CC=gcc
OBJ=lookup_table.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
lookup_table: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
.DEFAULT_GOAL := lookup_table
.PHONY: clean
clean:
	-rm -rf $(OBJ) lookup_table
