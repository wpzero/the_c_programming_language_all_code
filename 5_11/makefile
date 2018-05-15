CC=gcc
OBJ=year.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
year: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.DEFAULT_GOAL := year
.PHONY: clean

clean:
	-rm -rf $(OBJ) year
