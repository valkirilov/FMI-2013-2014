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



int main() {

	int** inputMatrix = readMatrix();
  	//printMatrix(inputMatrix); 
  	
  	int max = inputMatrix[0][0];
  	for (short i=0; i<__N__; ++i) {
  		for (short j=0; j<__N__; ++j) {
  			if (inputMatrix[i][j] > max) {
  				max = inputMatrix[i][j];
  			}
  		}
  	}
  	cout << max << endl;

  	freeMatrix(inputMatrix);

 	return 0;
}
