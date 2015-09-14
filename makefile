PigsGame:game.o
	g++ main.cpp -o PigsGame

game.o: game.cpp game.h 
	g++ -c game.cpp 
clean:
	rm PigsGame *.o
