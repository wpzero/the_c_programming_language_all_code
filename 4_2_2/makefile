CC=gcc
OBJ=atof.o
CFLAGS=-g

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

atof: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.DEFAULT_GOAL := atof

.PHONY: clean

clean:
	-rm -rf $(OBJ) atof
