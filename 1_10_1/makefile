CC=gcc
obj=detab.o

.DEFAULT_GOAL := detab

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)
detab: $(obj)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	-rm -rf *.o detab
