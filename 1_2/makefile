CC=gcc
OBJ = main.o

%.o: %.c
	$(CC) -c -o $@ $<

fcnumber: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
