problem1 : problem1.o student.o
	g++ -o problem1 problem1.o student.o

problem1.o : problem1.cpp
	g++ -c problem1.cpp

student.o : student.cpp
	g++ -c student.cpp

problem2 : problem2.o student.o find_min_GPA.o
	g++ -o problem2 problem2.o student.o find_min_GPA.o

problem2.o : problem2.cpp
	g++ -c problem2.cpp

find_min_GPA.o : find_min_GPA.cpp
	g++ -c find_min_GPA.cpp

problem3 : problem3.o
	g++ -o problem3 problem3.o

problem3.o : problem3.cpp
	g++ -c problem3.cpp

problem4 : problem4.o
	g++ -o problem4 problem4.o

problem4.o : problem4.cpp
	g++ -c problem4.cpp

clean :
	rm -rf *.o problem1 problem2 problem3 problem4 
