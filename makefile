# Compiler options
#    the arguments after g++ specify specific options for the compiler
#    -Wall        ==> print all warnings
#    -pedantic    ==> print warnings when non-standard C++ is used
#    -std=c++11   ==> use the C++11 standard 
#    -g           ==> keep additional information to aid in debugging
#    -o           ==> specify the output filename
#    -c           ==> compile only (create a .o file)

pigsgame: main.o computer.o dice.o game.o player.o
	g++ -Wall -pedantic -g -std=c++11 -o pigsgame main.o computer.o dice.o game.o player.o
  
main.o: main.cpp
	g++ -Wall -pedantic -g -std=c++11 -c main.cpp
  
computer.o: computer.cpp computer.h
	g++ -Wall -pedantic -g -std=c++11 -c computer.cpp

dice.o: dice.cpp dice.h
	g++ -Wall -pedantic -g -std=c++11 -c dice.cpp

game.o: game.cpp game.h
	g++ -Wall -pedantic -g -std=c++11 -c game.cpp
  
player.o: player.cpp player.h
	g++ -Wall -pedantic -g -std=c++11 -c player.cpp

clean:
	rm -f pigsgame pigsgame.exe pigsgame.o computer.o dice.o game.o player.o
