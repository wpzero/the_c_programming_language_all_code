CC=gcc
OBJ=atoi.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
atoi: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.DEFAULT_GOAL := atoi
.PHONY: clean

clean:
	-rm -rf $(OBJ) atoi
