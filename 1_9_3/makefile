CC=gcc
OBJ=trailing.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
trailing: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.DEFAULT_GOAL :=  trailing

.PHONY: clean

clean:
	-rm *.o trailing
