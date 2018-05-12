CC=gcc
OBJ=macro_test.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
macro_test: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
.DEFAULT_GOAL := macro_test
.PHONY: clean

clean:
	-rm -rf $(OBJ) macro_test
