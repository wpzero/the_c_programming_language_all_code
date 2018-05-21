CC=gcc
OBJ=count.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
count: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.DEFAULT_GOAL := count
.PHONY := clean

clean:
	-rm -rf $(OBJ) count
