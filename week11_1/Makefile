problem1 : problem1.o
	g++ -o problem1 problem1.o

problem1.o : problem1.cpp animal.h
	g++ -c problem1.cpp

problem2 : problem2.cpp
	g++ -o problem2 problem2.cpp

problem3 : problem3.cpp
	g++ -o problem3 problem3.cpp

problem4 : problem4.o
	g++ -o problem4 problem4.o

problem4.o : problem4.cpp my_string.h
	g++ -c problem4.cpp

problem5 : problem5.cpp
	g++ -o problem5 problem5.cpp

clean :
	rm -rf *.o problem1 problem2 problem3 problem4 problem5
