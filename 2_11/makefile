CC=gcc
OBJ=lower.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
lower: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.DEFAULT_GOAL := lower
.PHONY: clean

clean:
	-rm -rf $(OBJ) lower
