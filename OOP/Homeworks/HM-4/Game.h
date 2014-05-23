#ifndef GAME_HPP__
#define GAME_HPP__

#include <string>

#include "GameReader.h"

class Game {

private:

	GameReader* gameReader_;

public:
	Game();

	void run();

};

#endif