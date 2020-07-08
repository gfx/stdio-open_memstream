CFLAGS := -Wall -Wextra -std=c99

a.out: example.c
	$(CC) $(CFLAGS) -o $@ $<