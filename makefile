CXX = g++
CXXFLAGS = -c -g -std=c++11 -Wall -W -Werror -pedantic

PigGame : player.o dice.o main.o
	$(CXX) $(LDFLAGS) -o PigGame player.o dice.o main.o

main.o : main.cpp dice.h Player.h
	$(CXX) $(CXXFLAGS) main.cpp

dice.o : dice.cpp dice.h
	$(CXX) $(CXXFLAGS) dice.cpp

player.o : Player.cpp Player.h
	$(CXX) $(CXXFLAGS) player.cpp



