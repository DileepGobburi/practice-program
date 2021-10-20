CC=gcc
CFLAGS=-c

final:main.o sorting.o
	$(CC) $^ -o $@
%.o:%.c
	$(CC) $(CFLAGS) $<
clean:
	rm *.o

