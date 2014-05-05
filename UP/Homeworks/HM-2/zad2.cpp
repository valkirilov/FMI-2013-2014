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
 *  FIX NOTE:
 *  In the lates version I was finding the largest element in the whole matrix.
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
  	
<<<<<<< HEAD
  	int max = inputMatrix[0][0];
    // Check for the diagonal!!! Not the whole matrix!!!
  	for (short i=0; i<__N__; ++i) {
  	   cout << ":"<< inputMatrix[i][i+i] << endl;
      if (inputMatrix[i][i+i] > max) {
	   		max = inputMatrix[i][i+i];
			}
  	}
  	cout << max << endl;
=======
	int max = inputMatrix[0][0];
	for (short i=0; i<__N__; ++i) {
    if (inputMatrix[i][i] > max) {
			max = inputMatrix[i][i];
		}
	}
	cout << max << endl;
>>>>>>> 936692fcc942c9743ec01882a7cdced14ca3d818

	freeMatrix(inputMatrix);

 	return 0;
}
