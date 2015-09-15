CXX = g++
CXXFLAGS = -c -g -std=c++11 -Wall -W -Werror -pedantic

PigGame : Player.o dice.o main.o
	$(CXX) $(LDFLAGS) -o PigGame Player.o dice.o main.o

main.o : main.cpp dice.h Player.h
	$(CXX) $(CXXFLAGS) main.cpp

dice.o : dice.cpp dice.h
	$(CXX) $(CXXFLAGS) dice.cpp

Player.o : Player.cpp Player.h
	$(CXX) $(CXXFLAGS) Player.cpp



