CC=gcc
OBJ=print_argv.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

print_argv: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.DEFAULT_GOAL := print_argv
.PHONY: clean

clean:
	-rm -rf $(OBJ) print_argv
