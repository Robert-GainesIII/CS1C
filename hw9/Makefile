CC= g++
FLAGS= -std=c++14 -Wall -g
OBJS=  

all:hw09

hw09: hw09.cpp Shape.h Rectangle.h Triangle.h
	$(CC) $(FLAGS) hw09.cpp -o hw09 $(OBJS)

#Shape.o: Shape.h
#	$(CC) $(FLAGS) -c Shape.h -o Shape.o

#Triangle.o: Triangle.h 
#	$(CC) $(FLAGS) -c Triangle.h -o Triangle.o

#Rectangle.o: Rectangle.h 
#	$(CC) $(FLAGS) -c Rectangle.h -o Rectangle.o


clean:
	rm  *.o hw09 hw09.tar

tar:
	tar cf hw09.tar Makefile hw09.cpp Shape.h Triangle.h Rectangle.h 
