CC=gcc
OBJ=histogram_count.o
CFLAGS=-g

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
histogram_count: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
