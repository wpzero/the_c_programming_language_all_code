CC=gcc
OBJ=wordcount.o

%.o: %.c
	$(CC) -c -o $@ $<
wordcount: $(OBJ)
	$(CC) -o $@ $^
