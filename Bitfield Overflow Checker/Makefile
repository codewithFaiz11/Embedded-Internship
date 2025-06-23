CC = gcc

CFLAGS = -Wall -Wextra -pedantic -std=c99

SRCS = main.c
OBJS = $(SRCS:.c=.o)
TARGET = main

.PHONY: all clean

all: $(TARGET)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(OBJS) $(TARGET)
