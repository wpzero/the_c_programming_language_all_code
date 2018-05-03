CC=gcc
OBJ=strcat.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
strcat: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
.DEFAULT_GOAL := strcat
.PHONY: clean

clean:
	-rm -rf $(OBJ) strcat
