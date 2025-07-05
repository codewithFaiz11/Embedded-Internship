CC = gcc
CFLAGS = -Wall -Wextra -pedantic -std=c99


SRCS = main.c app.c  
OBJS = $(SRCS:.c=.o)
TARGET = exe

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(OBJS) $(TARGET)