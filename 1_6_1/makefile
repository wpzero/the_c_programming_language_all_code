CC=gcc
OBJ=histogram_count.o

%.o: %.c
	$(CC) -c -o $@ $<
histogram_count: $(OBJ)
	$(CC) -o $@ $^
