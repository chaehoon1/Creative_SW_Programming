problem1: problem1.cpp
	g++ -o problem1 problem1.cpp

problem2 : problem2.o
	g++ -o problem2 problem2.o

problem2.o : problem2.cpp electronic_device.h television.h computer.h warranty.h
	g++ -c problem2.cpp

problem3 : problem3.o
	g++ -o problem3 problem3.o

problem3.o : problem3.cpp electronic_device.h television.h computer.h warranty.h IoT_controller.h
	g++ -c problem3.cpp

problem4 : problem4.o
	g++ -o problem4 problem4.o

problem4.o : problem4.cpp animal.h
	g++ -c problem4.cpp

clean :
	rm -rf *.o problem1 problem2 problem3 problem4
