CXX = g++
CXXFLAGS = -c -g -std=c++11 -Wall -W -Werror -pedantic
LDFLAGS =

PigGame : player.o dice.o main.o
	$(CXX) $(LDFLAGS) -o PigGame player.o dice.o main.o

main.o : main.cpp dice.h player.h
	$(CXX) $(CXXFLAGS) main.cpp

dice.o : dice.cpp dice.h
	$(CXX) $(CXXFLAGS) dice.cpp

player.o : player.cpp player.h
	$(CXX) $(CXXFLAGS) player.cpp



