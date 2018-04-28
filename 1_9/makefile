CC=gcc
OBJ=longest_line.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
longest_line: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
