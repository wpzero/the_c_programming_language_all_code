CC=gcc
OBJ=escape.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
escape: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.DEFAULT_GOAL := escape
.PHONY: clean

clean:
	-rm -rf $(OBJ) escape
