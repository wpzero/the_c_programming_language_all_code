CC=gcc
OBJ=squeeze.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
squeeze: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.DEFAULT_GOAL := squeeze
.PHONY: clean

clean:
	-rm -rf $(OBJ) squeeze
