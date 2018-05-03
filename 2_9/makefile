CC=gcc
OBJ=getbits.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
getbits: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.DEFAULT_GOAL := getbits

.PHONY: clean

clean:
	-rm -rf $(OBJ) getbits
