cow:cow.o
	g++ -o cow cow.o

cow.o:cow.cpp
	g++ -c cow.cpp

clean:
	rm cow *.o
