CC= g++
FLAGS= -std=c++14 -Wall -g
OBJS= 

all:hw11

hw11: hw11.cpp
	$(CC) $(FLAGS) hw11.cpp -o hw11 $(OBJS)

clean:
	rm  *.o hw11 hw11.tar

tar:
	tar cf hw11.tar Makefile hw11.cpp