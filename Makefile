all: pig

pig: pigsgame.o person.o computer.o
	g++ pigsgame.o person.o computer.o -o pig

pigsgame.o: pigsgame.cpp
	g++ -c pigsgame.cpp

person.o: person.cpp
	g++ -c person.cpp

computer.o: computer.cpp
	g++ -c computer.cpp

clean:
	rm *o pig
