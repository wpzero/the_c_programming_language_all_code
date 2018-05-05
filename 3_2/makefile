CC=gcc
OBJ=charcount.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
charcount: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.DEFAULT_GOAL := charcount
.PHONY: clean

clean:
	-rm -rf $(OBJ) charcount
