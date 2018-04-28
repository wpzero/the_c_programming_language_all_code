CC=gcc
OBJ=fold_line.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
fold_line: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.DEFAULT_GOAL := fold_line

.PHONY: clean

clean:
	-rm -r *.o fold_line
