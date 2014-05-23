
#include <iostream>
#include "GameReader.h"


GameReader::GameReader() 
{}

void GameReader::getScenarios() {

	scenariosDir_ = opendir( SCENARIOS_DIR.c_str() );
  	if (scenariosDir_ == NULL) {
    	std::cout << "Error(" << ") opening " << SCENARIOS_DIR << std::endl;
    	return;
    }

    struct dirent *dirp;
    std::string filePath;
  	while ((dirp = readdir(scenariosDir_))) {
    	filePath = SCENARIOS_DIR + "/" + dirp->d_name;

    	std::cout << filePath << std::endl;

    	// If the file is a directory (or is in some way invalid) we'll skip it 
    	//if (stat( filepath.c_str(), &filestat )) continue;
    	//if (S_ISDIR( filestat.st_mode ))         continue;

    	// Endeavor to read a single number from the file and display it
    	//fin.open( filepath.c_str() );
    	//if (fin >> num)
      	//cout << filepath << ": " << num << endl;
    	//fin.close();
    	//}
    }


}