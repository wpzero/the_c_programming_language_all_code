CC=gcc
OBJ=trim.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
trim: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.DEFAULT_GOAL := trim

.PHONY: clean

clean:
	-rm -rf $(OBJ) trim
