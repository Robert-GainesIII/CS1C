CC= g++
FLAGS= -std=c++11 -Wall -g
OBJS= 

all: hw16

hw16: hw16.cpp
	$(CC) $(FLAGS) hw16.cpp -o hw16 $(OBJS)

clean:
	rm  *.o hw16 hw16.tar

tar:
	tar cf hw16.tar hw16.scr Makefile hw16.cpp