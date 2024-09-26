CC = gcc
CFLAGS = -std=c99 -Wall -Wextra -pednatic 

TARGET = mystery_explode 
SOURCES = mystery_explode.c

all:$(TARGET)

$(TARGET):$(SOURCES)
    $(CC) $(CFLAGS) $(SOURCES) -o $(TARGET)

clean:
rm -f $(TARGET)

.PHONY: all clean 