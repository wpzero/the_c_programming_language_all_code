CC=gcc
OBJ=multiple_count.o

%.o: %.c
	$(CC) -c -o $@ $<
multiple_count: $(OBJ)
	$(CC) -o $@ $^
