#### Makefile Start ####
CC=g++
CFLAGS=-std=c++0x -c -Wall
LIBLOCATION=-L/usr/local/lib
LIBS=
HDRLOCATION=-I/usr/local/include

SOURCES=main.cpp menu.cpp player.cpp cpu.cpp dice.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=PigsGame

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) $(LIBLOCATION) $(HDRLOCATION) $(LIBS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f *.o PigsGame
##Makefile Derived from stackoverflow:
#### Makefile End ####
