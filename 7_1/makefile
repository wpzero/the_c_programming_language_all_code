CC=gcc
OBJ=minprintf.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
minprintf: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.DEFAULT_GOAL := minprintf
.PHONY: clean

clean:
	-rm -rf $(OBJ) minprintf
