
CC = gcc
OBJECTS_MAIN=main.o
OBJECT_MyBank = myBank.o   
FLAGS = -Wall
AR = ar


all: main

main: main.o libMyBank.a 
	$(CC) $(FLAGS) -o main $(OBJECTS_MAIN) libMyBank.a 

libMyBank.a: myBank.o 
	$(AR) -rcs libMyBank.a  $(OBJECT_MyBank)

main.o: main.c myBank.h
	$(CC) $(FLAGS) -c main.c
myBank.o: myBank.c myBank.h
	$(CC) $(FLAGS) -c myBank.c
.PHONY: all clean

clean: 
	rm -f *.o *.a main
