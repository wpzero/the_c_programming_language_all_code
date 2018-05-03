CC=gcc
OBJ=rightrot.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
rightrot: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.DEFAULT_GOAL := rightrot
.PHONY: clean

clean:
	-rm -rf $(OBJ) rightrot
