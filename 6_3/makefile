CC=gcc
OBJ=rect.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
rect: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.DEFAULT_GOAL := rect
.PHONY: clean

clean:
	-rm -rf $(OBJ) rect
