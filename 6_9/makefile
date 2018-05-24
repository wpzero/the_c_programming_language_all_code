CC=gcc
OBJ=bit_field.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
bit_field: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
.DEFAULT_GOAL := bit_field
.PHONY: clean

clean:
	-rm -rf $(OBJ) bit_field
