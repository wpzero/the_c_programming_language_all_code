CC=gcc
OBJ=type_range.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

type_range: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.DEFAULT_GOAL := type_range

.PHONY: clean

clean:
	-rm -rf *.o type_range
