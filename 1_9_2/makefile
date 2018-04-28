CC=gcc
OBJ=print_80_line.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

print_80_line: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.DEFAULT_GOAL := print_80_line

.PHONY: clean

clean:
	-rm -f *.o print_80_line
