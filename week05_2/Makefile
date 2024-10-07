problem1 : problem1.o avg_i.o avg_d.o
	g++ -o problem1 problem1.o avg_i.o avg_d.o

problem2 : problem2.o avg_i.o avg_d.o avgp.o avg_iarr.o avg_darr.o sumi.o sumd.o
	g++ -o problem2 problem2.o avg_i.o avg_d.o avgp.o avg_iarr.o avg_darr.o sumi.o sumd.o

problem3 : problem3.o
	g++ -o problem3 problem3.o

problem4 : problem4.o
	g++ -o problem4 problem4.o

problem1.o : avg.h problem1.cpp
	g++ -c problem1.cpp

avg_i.o : avg.h avg_i.cpp
	g++ -c avg_i.cpp

avg_d.o : avg.h avg_d.cpp
	g++ -c avg_d.cpp

problem2.o : avg.h problem2.cpp
	g++ -c problem2.cpp 

avgp.o : avg.h point.h avgp.cpp
	g++ -c avgp.cpp

sumi.o : sum.h sumi.cpp
	g++ -c sumi.cpp

sumd.o : sum.h sumd.cpp
	g++ -c sumd.cpp

avg_iarr.o : avg.h sum.h avg_iarr.cpp
	g++ -c avg_iarr.cpp

avg_darr.o : avg.h sum.h avg_darr.cpp
	g++ -c avg_darr.cpp 

problem3.o : problem3.cpp
	g++ -c problem3.cpp

problem4.o : problem4.cpp
	g++ -c problem4.cpp

clean: 
	rm -rf *.o problem1 problem2 problem3 problem4

dev : 
	qa
