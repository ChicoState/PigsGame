CXX = g++
CXXFLAGS = -c -g -std=c++11 -Wall -W -Werror -pedantic

PigGame : Player.o Dice.o main.o
	$(CXX) $(LDFLAGS) -o PigGame Player.o Dice.o main.o

main.o : main.cpp Dice.h Player.h
	$(CXX) $(CXXFLAGS) main.cpp

Dice.o : Dice.cpp Dice.h
	$(CXX) $(CXXFLAGS) Dice.cpp

Player.o : Player.cpp Player.h
	$(CXX) $(CXXFLAGS) Player.cpp



