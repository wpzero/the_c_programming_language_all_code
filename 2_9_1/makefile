CC=gcc
OBJ=setbits.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
setbits: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.DEFAULT_GOAL := setbits
.PHONY: clean

clean:
	-rm -rf $(OBJ) setbits
