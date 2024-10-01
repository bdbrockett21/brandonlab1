CC = gcc
CFLAGS = -Wall -Wextra -std=c99

explode: main.o lab1.o
	$(CC) $(CFLAGS) -o explode main.o lab1.o

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

lab1.o: lab1.c
	$(CC) $(CFLAGS) -c lab1.c

clean:
	rm -f explode *.o

.PHONY: clean