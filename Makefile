CCC = g++
	CCFLAGS = -g -std=c++11 -Wall -Wextra 
	OBJECTS = main.o prime.o

primeNumber: $(OBJECTS)
	$(CCC) $(CCFLAGS) $(OBJECTS) -o primeNumber

main.o: main.cpp prime.h
	$(CCC) $(CCFLAGS) -c main.cpp

prime.o: prime.cpp prime.h
	$(CCC) $(CCFLAGS) -c prime.cpp

clean:
	@ \rm -f ./*.o
	@ \rm -f ./Styr_m

