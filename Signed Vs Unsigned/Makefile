CC = gcc

CFLAGS = -Wall -Wextra -pedantic -std=c99

SRCS = task3.c
OBJS = $(SRCS:.c=.o)
TARGET = task3

.PHONY: all clean

all: $(TARGET)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(OBJS) $(TARGET)
