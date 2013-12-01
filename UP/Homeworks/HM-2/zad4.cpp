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
 #include <iomanip>
 using namespace std;

// Defining contants
int const __N__ = 4;
int const __P__ = -123456789;


int* readMatrix(){
    int* matrix = new int[__N__];
    for(int i = 0; i < __N__; i++) {
      int input;
      cin >> input;
      if (!cin) {
        cout << "Your input is not valid, try again!" << endl;
        exit (EXIT_FAILURE);
        }
      matrix[i] = input;     
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
            if (matrix[i][j] == __P__)
              cout << setw(4) << "p ";
            else
              cout << setw(3) << matrix[i][j] << " ";
        }    
        cout << endl;
    }
}


int main() {

	int* inputMatrix = readMatrix();
  int** generatedMatrix = new int*[__N__];
  for(int i = 0; i < __N__; i++) {
    generatedMatrix[i] = new int[__N__]; 
    for(int j = 0; j < __N__; j++) { 
      if (j == 0) {
        generatedMatrix[i][j] = inputMatrix[i];
      }
      else {
        generatedMatrix[i][j] = 0;   
      }       
    }    
  }

  //printMatrix(generatedMatrix); 

  // Fill with values
  for(int i = 1; i < __N__; i++) {
    for(int j = 0; j < __N__; j++) {       
      if (j == __N__-1 || generatedMatrix[j+1][i-1] == __P__ || generatedMatrix[j][i-1] == __P__) {
        generatedMatrix[j][i] = __P__;
        continue;
      }
      generatedMatrix[j][i] = generatedMatrix[j+1][i-1] - generatedMatrix[j][i-1];
    }    
  }


  printMatrix(generatedMatrix); 
  
  delete[] inputMatrix;
	freeMatrix(generatedMatrix);

 	return 0;
}