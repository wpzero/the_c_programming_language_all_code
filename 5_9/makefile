CC=gcc
OBJ=strn.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
strn: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.DEFAULT_GOAL := strn
.PHONY: clean
clean:
	-rm -rf $(OBJ) strn
