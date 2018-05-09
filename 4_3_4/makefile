CC=gcc
OBJ=getch.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
getch: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.DEFAULT_GOAL := getch
.PHONY: clean

clean:
	-rm -rf $(OBJ) getch
