all: point_stuff student_stuff

point.o: point.cpp point.hpp
	g++ -c point.cpp -o point.o

point_stuff: point.o
	g++ point_stuff.cpp point.o -o point_stuff

student.o: student.cpp student.hpp
	g++ -c student.cpp -o student.o

student_stuff: student.o
	g++ student_stuff.cpp student.o -o student_stuff

clean:
	rm -f *.o point_stuff student_stuff
