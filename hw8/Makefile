CC= g++
FLAGS= -std=c++14 -Wall -g
OBJS=

all:hw08

hw08: hw08.cpp
	$(CC) $(FLAGS) hw08.cpp -o hw08 $(OBJS)


clean:
	rm  *.o hw08 hw08.tar

tar:
	tar cf hw08.tar Makefile hw08.cpp
