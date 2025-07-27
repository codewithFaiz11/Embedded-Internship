CC = gcc

CFLAGS = -Wall -g
LDFLAGS = -pthread
SRCS = main.c
TARGET = exe

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

clean:
	rm -f $(TARGET)

.PHONY: all clean
