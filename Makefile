OBJS = insertion
CC = gcc

all: insertion

insertion:
	$(CC) insertion.c -o insertion

clean:
	rm -rf $(OBJS)
