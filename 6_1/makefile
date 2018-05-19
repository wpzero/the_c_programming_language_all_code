CC=gcc
OBJ=struct.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
struct: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
.DEFAULT_GOAL: struct
.PHONY: clean

clean:
	-rm -rf $(OBJ) struct
