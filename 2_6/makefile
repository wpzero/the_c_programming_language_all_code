CC=gcc
OBJ=line_number.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

line_number: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.DEFAULT_GOAL := line_number

.PHONY: clean

clean:
	-rm -rf $(OBJ) line_number
