CC=gcc
OBJ=putwords.o

%.o: %.c
	$(CC) -c -o $@ $<
putwords: $(OBJ)
	$(CC) -o $@ $^
