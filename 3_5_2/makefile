CC=gcc
OBJ=expand.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
expand: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.DEFAULT_GOAL := expand
.PHONY: clean

clean:
	-rm -rf $(OBJ) expand
