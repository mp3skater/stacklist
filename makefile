# Makefile

CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGET = stack
SRC = test.c stacklist2.c
OBJ = $(SRC:.c=.o)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $<

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET) $(OBJ)

cleanall:
	rm -f *.o *.csv $(TARGET)
