all: pigs

pigs: main.o computer.o player.o
    g++ main.o computer.o player.o -o pigs

main.o: main.cpp
    g++ -c main.cpp

player.o: player.cpp player.h
    g++ -c player.cpp player.h

hello.o: computer.cpp computer.h
    g++ -c computer.cpp computer.h

clean:
    rm *o pigs