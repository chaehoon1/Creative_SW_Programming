problem1 : problem1.o icev.o ev.o
	g++ -o problem1 problem1.o icev.o ev.o

problem1.o : problem1.cpp ev.h icev.h vehicle.h
	g++ -c problem1.cpp

icev.o : icev.cpp icev.h vehicle.h
	g++ -c icev.cpp

ev.o : ev.cpp ev.h vehicle.h
	g++ -c ev.cpp

problem2 : problem2.o hev.o icev.o ev.o
	g++ -o problem2 problem2.o hev.o icev.o ev.o

problem2.o : problem2.cpp hev.h ev.h icev.h vehicle.h
	g++ -c problem2.cpp

hev.o : hev.cpp hev.h ev.h icev.h vehicle.h
	g++ -c hev.cpp

problem4 : problem4.o balance_simulator.o
	g++ -o problem4 problem4.o balance_simulator.o

problem4.o : problem4.cpp bank_account.h balance_simulator.h
	g++ -c problem4.cpp

balance_simulator.o : balance_simulator.cpp balance_simulator.h bank_account.h
	g++ -c balance_simulator.cpp

clean :
	rm -rf *.o problem1 problem2 problem4

