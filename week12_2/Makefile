problem1 : problem1.o
	g++ -o problem1 problem1.o

problem1.o : problem1.cpp my_container.h
	g++ -c problem1.cpp

problem2 : problem2.o
	g++ -o problem2 problem2.o

problem2.o : problem2.cpp my_container.h
	g++ -c problem2.cpp

problem3 : problem3.o
	g++ -o problem3 problem3.o

problem3.o : problem3.cpp account.h simple_interest_account.h compound_interest_account.h
	g++ -c problem3.cpp

problem4 : problem4.o
	g++ -o problem4 problem4.o

problem4.o : problem4.cpp account.h simple_interest_account.h compound_interest_account.h
	g++ -c problem4.cpp

clean :
	rm -rf *.o problem1 problem2 problem3 problem4
