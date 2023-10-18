CC = gcc
CFLAGS = -Wall -std=c99

menu: menu.c index_first_even.o index_last_odd.o sum_between_even_odd.o sum_before_even_and_after_odd.o
	$(CC) $(CFLAGS) -o menu menu.c index_first_even.o index_last_odd.o sum_between_even_odd.o sum_before_even_and_after_odd.o

index_first_even.o: index_first_even.c
	$(CC) $(CFLAGS) -c index_first_even.c

index_last_odd.o: index_last_odd.c
	$(CC) $(CFLAGS) -c index_last_odd.c

sum_between_even_odd.o: sum_between_even_odd.c
	$(CC) $(CFLAGS) -c sum_between_even_odd.c

sum_before_even_and_after_odd.o: sum_before_even_and_after_odd.c
	$(CC) $(CFLAGS) -c sum_before_even
