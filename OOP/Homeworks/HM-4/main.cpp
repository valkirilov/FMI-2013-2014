
#include <iostream>

#include "Game.h"

#include "Creatures/Creature.h"

using namespace std;

int main() {

	cout << "Hello world!" << endl;

	Creature me("Valyo", 10, 10, 50, 100);
	me.hello();

	Game game;
	game.run();

	return 0;
}