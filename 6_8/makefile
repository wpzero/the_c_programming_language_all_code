CC=gcc
OBJ=union.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
union: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
.DEFAULT_GOAL := union
.PHONY :clean

clean:
	-rm -rf $(OBJ) union
