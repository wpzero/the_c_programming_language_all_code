CC=gcc
OBJ=screen.o

%.o: $.c
	$(CC) -c -o $@ $< $(CFLAGS)
screen: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.DEFAULT_GOAL := screen
.PHONY: clean

clean:
	-rm -rf $(OBJ) screen
