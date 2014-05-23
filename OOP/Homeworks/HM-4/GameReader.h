#ifndef GAME_READER_HPP__
#define GAME_READER_HPP__

#include <string>
#include <dirent.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

std::string const SCENARIOS_DIR = "Scenarios";

class GameReader {

private:

	DIR* scenariosDir_;

protected:

public:
	GameReader();

	void getScenarios();
	void listScenarios();
	void loadScenario();

};

#endif