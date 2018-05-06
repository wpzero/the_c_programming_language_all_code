CC=gcc
OBJ=itob.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
itob: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
.DEFAULT_GOAL := itob
.PHONY: clean
clean:
	-rm -rf $(OBJ) itob
