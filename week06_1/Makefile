problem1 : problem1.o
	g++ -o problem1 problem1.o

problem1.o : problem1.cpp student.h
	g++ -c problem1.cpp

problem2 : problem2.o student.o
	g++ -o problem2 problem2.o student.o

problem2.o : problem2.cpp student2.h
	g++ -c problem2.cpp

student.o : student.cpp student2.h
	g++ -c student.cpp

problem3 : problem3.o point_scaleup.o
	g++ -o problem3 problem3.o point_scaleup.o

problem3.o : problem3.cpp point.h
	g++ -c problem3.cpp

point_scaleup.o : point_scaleup.cpp point.h
	g++ -c point_scaleup.cpp

problem4 : problem4.o
	g++ -o problem4 problem4.o

problem4.o : problem4.cpp TV.h
	g++ -c problem4.cpp

clean :
	rm -rf *.o problem1 problem2 problem3 problem4 problem
