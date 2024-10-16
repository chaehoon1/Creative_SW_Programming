problem1 : problem1.o point_scaleup.o
	g++ -o problem1 problem1.o point_scaleup.o

problem1.o : problem1.cpp point.h
	g++ -c problem1.cpp

point_scaleup.o : point_scaleup.cpp point.h
	g++ -c point_scaleup.cpp

problem2 : problem2.o darray.o
	g++ -o problem2 problem2.o darray.o

problem2.o : problem2.cpp darray.h
	g++ -c problem2.cpp

darray.o : darray.cpp darray.h
	g++ -c darray.cpp

problem3 : problem3.o student.o
	g++ -o problem3 problem3.o student.o 	

problem3.o : problem3.cpp student.h
	g++ -c problem3.cpp

student.o :student.cpp student.h
	g++ -c student.cpp

problem4 : problem4.o point_scaleup2.o
	g++ -o problem4 problem4.o point_scaleup2.o

problem4.o : problem4.cpp point.h
	g++ -c problem4.cpp

point_scaleup2.o : point_scaleup2.cpp point.h
	g++ -c point_scaleup2.cpp

clean :
	rm -rf *.o problem1 problem2 problem3 problem4
