CC=gcc
OBJ = scanf_example.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

scanf_example: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.DEFAULT_GOAL := scanf_example
.PHONY: clean

clean:
	-rm -rf $(OBJ) scanf_example
