CC=gcc
OBJ=remove_comments.o

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
remove_comments: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
.DEFAULT_GOAL := remove_comments

.PHONY: clean

clean:
	-rm -f *.o remove_comments
