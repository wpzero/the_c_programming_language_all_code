CC=gcc
OBJ = main.o

%.o: %.c
	$(CC) -c -o $@ $<

simplecp: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
