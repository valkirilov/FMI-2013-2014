#include <iostream>
#include <stdlib.h>
#include <iomanip> 
using namespace std;

void printMatrix(int* matrix[], int size) {
	for (int i=0; i<size; i++) {
		for (int j=0; j<size; j++) {
			cout << setw(3) << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

void readInput(int &inputSize) {
	cout << "Enter number between 1 and 9: ";
	cin >> inputSize;

	if ((!cin) || (inputSize < 1 || inputSize > 9)) {
		cout << "Not valid!" << endl;
		exit(EXIT_FAILURE);
	}
}

int** createMatrix(int size) {
	int **newMatrix = new int*[size];
	for (int i=0; i<size; i++) {
		newMatrix[i] = new int[size];
		for (int j=0; j<size; j++) {
			newMatrix[i][j] = 0;
		}
	}

	return newMatrix;
}

bool isCell(int* matrix[], int size, int row, int col) {
	// if we are outside of the matrix
	
	if ((row < 0 || row >= size) || (col < 0 || col >= size))
		return false;

	// if we were there already
	if (matrix[row][col] != 0)
		return false;

	return true;
}
bool isFilled(int* matrix[], int size) {
	bool isMatrixFilled = true;
	for (int i=0; i<size; i++)
		for (int j=0; j<size; j++)
			if (matrix[i][j] == 0) 
				return false;
	return true;
}


int nextNumber = 1;

void generateMatrix(int* matrix[], int size, int row, int col, int direction);

void goRight(int* matrix[], int size, int row, int col, int direction) {
	// if the cells in this direction are done, change the direction
	if (!isCell(matrix, size, row, col)) {
		direction++;
		col--;
		row++;	// go to the next
	}
	else {
		matrix[row][col] = nextNumber;
		col++;
		nextNumber++;
	}
	generateMatrix(matrix, size, row, col, direction);
}
void goBottom(int* matrix[], int size, int row, int col, int direction) {
	// if the cells in this direction are done, change the direction
	if (!isCell(matrix, size, row, col)) {
		direction++;
		col--;
		row--;	// go to the next
	}
	else {
		matrix[row][col] = nextNumber;
		row++;
		nextNumber++;
	}
	
	generateMatrix(matrix, size, row, col, direction);
}
void goLeft(int* matrix[], int size, int row, int col, int direction) {
	// if the cells in this direction are done, change the direction
	if (!isCell(matrix, size, row, col)) {
		direction = 1;
		col++;
		row--;	// go to the next
	}
	else {
		matrix[row][col] = nextNumber;
		col--;
		nextNumber++;
	}
	
	generateMatrix(matrix, size, row, col, direction);
}
void goTop(int* matrix[], int size, int row, int col, int direction) {
	// if the cells in this direction are done, change the direction
	if (!isCell(matrix, size, row, col)) {
		direction++;
		col++;
		row++;	// go to the next
	}
	else {
		matrix[row][col] = nextNumber;
		row--;
		nextNumber++;
	}
	
	generateMatrix(matrix, size, row, col, direction);
}


// direction
// 1 top, 2 right, 3 bottom, 4 left
void generateMatrix(int* matrix[], int size, int row, int col, int direction) {
	if (isFilled(matrix, size))
		return; 

	switch (direction) {
		case 1: 
			goTop(matrix, size, row, col, direction);
			break;
		case 2: // right
			goRight(matrix, size, row, col, direction);
			break;
		case 3: 
			goBottom(matrix, size, row, col, direction);
			break;
		case 4: 
			goLeft(matrix, size, row, col, direction);
			break;
	}

}


int main() {

	// int matrix1[][3] = {
	// 	{1, 2, 3},
	// 	{4, 5, 6},
	// 	{7, 8, 9}
	// };
	// int size = 3;
	// printMatrix(&matrix1[0][0], size);

	int inputSize = 0;
	readInput(inputSize);	

	int **matrix = createMatrix(inputSize);
	//printMatrix(matrix, inputSize);

	generateMatrix(matrix, inputSize, 0, 0, 2);
	printMatrix(matrix, inputSize);

	return 0;
}