CC=gcc
OBJ=wpstrcat.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
wpstrcat: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.DEFAULT_GOAL := wpstrcat
.PHONY: clean

clean:
	-rm -rf $(OBJ) wpstrcat
