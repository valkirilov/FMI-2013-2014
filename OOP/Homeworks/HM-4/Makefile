all: hm

hm: main.o Game.o Creature.o
	g++ -o hm main.o Creature.o

main.o: main.cpp Game.h Creatures/Creature.h
	g++ -c main.cpp

# Main game runners
Game.o: Game.h Game.cpp GameReader.h 
	g++ -c -o Game.o Game.cpp

GameReader.o: GameReader.h GameReader.cpp
	g++ -c -o GameReader.o GameReader.cpp

Creature.o: Creatures/Creature.h Creatures/Creature.cpp
	g++ -c -o Creature.o Creatures/Creature.cpp



clean:
	rm -f *.o *~ a.out hm