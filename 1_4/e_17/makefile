CC=gcc
OBJ = main.o

%.o: %.c
	$(CC) -c -o $@ $<

whatiseof: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
