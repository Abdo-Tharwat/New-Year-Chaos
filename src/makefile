INC = ../inc
SRC = main.c  \
      minimumBribes.c
TARGET = output.exe
OBJ = $(SRC:.c=.o)
CC  = gcc
CFLAG = -std=c99 -Wall


%.o : %.c
	$(CC) -c $(CFLAG) -I$(INC) $<



.PHONY: all

all: $(OBJ)
	$(CC) -o $(TARGET) $(CFLAG) $(OBJ) -I$(INC) 

.PHONY: clear

clear:
	del *.o *.map *.exe

