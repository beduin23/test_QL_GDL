CC=gcc
CFLAGS=-I.

default: all

all: TEST

TEST: test.c
	$(CC) $(CFLAGS) -o test test.c

clean veryclean:
	$(RM) test
