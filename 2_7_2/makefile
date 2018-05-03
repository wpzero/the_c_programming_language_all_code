CC=gcc
OBJ=htoi.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

htoi: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.DEFAULT_GOAL := htoi

.PHONY: clean

clean:
	-rm -rf $(OBJ) htoi
