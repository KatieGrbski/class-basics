all: point_stuff

point.o: point.cpp point.hpp
	g++ -c point.cpp -o point.o

point_stuff: point.o
	g++ point_stuff.cpp point.o -o point_stuff

clean:
	rm -f *.o point_stuff
