CC=gcc
OBJ=strcpy.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
strcpy: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.DEFAULT_GOAL := strcpy
.PHONY: clean
clean:
	-rm -rf $(OBJ) strcpy
