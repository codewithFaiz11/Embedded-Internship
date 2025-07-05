CC = gcc
CFLAGS = -Wall -Wextra -pedantic -std=c99


SRCS = main.c math.c  
OBJS = $(SRCS:.c=.o)
TARGET = program

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(OBJS) $(TARGET)