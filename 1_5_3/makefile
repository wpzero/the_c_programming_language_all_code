CC=gcc
OBJ=lncount.o

%.o: %.c
	$(CC) -c -o $@ $<

lncount: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
