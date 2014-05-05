/*
 *  Programming basics
 *  FMI SU "St. Kliment Ohridski"
 *   
 *  Valentin Kirilov
 *  val.kirilov@gmail.com
 *  valkirilov.com
 *
 *  01 December 2013
 *
 */

 #include <iostream>
 #include <stdlib.h>     /* exit, EXIT_FAILURE */
 using namespace std;

// Defining contants
int const __N__ = 4;


int** readMatrix(){
    int** matrix = new int*[__N__];
    for(int i = 0; i < __N__; i++) {
        matrix[i] = new int[__N__]; 
        for(int j = 0; j < __N__; j++) { 
        	int input;
        	cin >> input;
		  	if (!cin) {
		  		cout << "Your input is not valid, try again!" << endl;
		  		exit (EXIT_FAILURE);
		  	}
        	matrix[i][j] = input; 
    	}    
    }
    return matrix;
}
int ** createBlankMatrix() {
	int** visited = new int*[__N__];
  	for (int i=0; i<__N__; ++i) {
  		visited[i] = new int[__N__];
  		for (int j=0; j<__N__; ++j)
  			visited[i][j] = 0;
  	}
  	return visited;
}
bool checkIsFull(int** matrix) {
	bool isFull = true;
	for (int short i=0; i<__N__; ++i) {
		for (int short j=0; j<__N__; ++j) {
			if (matrix[i][j] == 0)
				return false;
		}	
	}
	return isFull;
}

void freeMatrix(int** matrix){
    if(matrix){
        for(int i = 0; i < __N__; i++) { 
        	if(matrix[i]) { 
        		delete[] matrix[i]; 
        	} 
        }
        delete[] matrix;    
    }
}

void printMatrix(int** matrix){
    for(int i = 0; i < __N__; i++){
        for(int j = 0; j < __N__; j++){
            cout << matrix[i][j] << " ";
        }    
        cout << endl;
    }
}

// DIRECTIONS:
// 1 - right; 2 - bottom; 3 - left; 4 - top;
void makeASpiral(int row, int col, int direction, int** matrix, int** visited) {
	// If we are chkecd everyrhing
	if (checkIsFull(visited) == true) {
		return;
	}

	switch (direction) {
		case 1: 
			// Moving to the right
			if (col == __N__) {
				direction = 2;
				makeASpiral(row+1, col-1, direction, matrix, visited);
				return;
			}
			if (visited[row][col] == 1) {
				direction = 2;
				makeASpiral(row+1, col-1, direction, matrix, visited);
				return;
			}

			cout << matrix[row][col] << " ";
			visited[row][col] = 1;
			makeASpiral(row, col+1, direction, matrix, visited);
			return;

		case 2: 
			// Moving to the bottom
			if (row == __N__) {
				direction = 3;
				makeASpiral(row-1, col-1, direction, matrix, visited);
				return;
			}
			if (visited[row][col] == 1) {
				direction = 3;
				makeASpiral(row-1, col-1, direction, matrix, visited);
				return;
			}

			cout << matrix[row][col] << " ";
			visited[row][col] = 1;
			makeASpiral(row+1, col, direction, matrix, visited);
			return;
		case 3: 
			// Moving to the left
			if (col == -1) {
				direction = 4;
				makeASpiral(row-1, col+1, direction, matrix, visited);
				return;
			}
			if (visited[row][col] == 1) {
				direction = 4;
				makeASpiral(row-1, col+1, direction, matrix, visited);
				return;
			}

			cout << matrix[row][col] << " ";
			visited[row][col] = 1;
			makeASpiral(row, col-1, direction, matrix, visited);
			return;
		case 4: 
			// Moving to the top
			if (row == -1) {
				direction = 1;
				makeASpiral(row+1, col+1, direction, matrix, visited);
				return;
			}
			if (visited[row][col] == 1) {
				direction = 1;
				makeASpiral(row+1, col+1, direction, matrix, visited);
				return;
			}

			cout << matrix[row][col] << " ";
			visited[row][col] = 1;

			makeASpiral(row-1, col, direction, matrix, visited);
			return;;
	}

}




int main() {

	int** inputMatrix = readMatrix(); // Make some validation
	int** visitedMatrix = createBlankMatrix();
  	//printMatrix(inputMatrix); 
  	
  	makeASpiral(0, 0, 1 , inputMatrix, visitedMatrix);

  	freeMatrix(inputMatrix);
  	freeMatrix(visitedMatrix);

 	return 0;
}


// peter.p.sabev@gmail.com