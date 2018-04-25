CC=gcc
OBJ = count.o

%.o: %.c
	$(CC) -c -o $@ $<

charcount: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
