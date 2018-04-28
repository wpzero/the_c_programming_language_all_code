CC=gcc
OBJ=longest.o

.DEFAULT_GOAL := longest

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
longest: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
.PHONY: clean
clean:
	-rm -f *.o longest
