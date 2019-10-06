CC= g++
FLAGS= -std=c++14 -Wall -g
OBJS= 

all:hw13

hw13: hw13.cpp
	$(CC) $(FLAGS) hw13.cpp -o hw13 $(OBJS)

clean:
	rm  *.o hw13 hw13.tar

tar:
	tar cf hw13.tar  hw13.scr Makefile hw13.cpp queueADT.h queueAsArray.h 