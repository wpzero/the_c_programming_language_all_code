CC=gcc
OBJ=dcl.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
dcl: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.DEFAULT_GOAL := dcl
.PHONY: clean

clean:
	-rm -rf $(OBJ) dcl
