ma: implement.o definition.o #math depend on these and command to run
	g++ implement.o definition.o -o area

implement.o: implement.cpp # before implement.o run following
	g++ -c implement.cpp

definition.o: definition.cpp
	g++ -c definition.cpp

clean:
	rm *.o area