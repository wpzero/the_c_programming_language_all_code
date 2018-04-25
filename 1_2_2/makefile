CC=gcc
OBJ=main.o

%.o: %.c
	$(CC) -c -o $@ $<

charsize: $(OBJ)
	$(CC) -o $@  $^
