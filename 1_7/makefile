CC=gcc
OBJ=power.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
power: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
