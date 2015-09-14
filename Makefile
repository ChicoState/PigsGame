pigs: Game.o Die.o Player.o Main.o

Main.o: main.cpp game.h die.h player.h
	g++ -c main.cpp 

Game.o: game.cpp game.h die.h player.h
	g++ -c game.cpp

Die.o: die.cpp die.h
	g++ -c die.cpp

Player.o: player.cpp player.h
	g++ -c player.cpp