
#include "Game.h"

// Initialize some stuff in the constructor
Game::Game() {
	gameReader_ = new GameReader();
}

void Game::run() {
	gameReader_->getScenarios();
}