// Да се напише програмен фрагмент, които намира максималния 
// елемент от елементите над главния диагонал на квадратна матрица a[nXn]

#include <iostream>
#include <iomanip>
using namespace std;

const int __N__ = 4;

int main() {

	int matrix[__N__][__N__] = {{1,2,56,4},{5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
	int input;
	// Read input
	/*
	for (unsigned int i=0; i<__N__; ++i) {
		for (unsigned int j=0; j<__N__; ++j) {
			cin >> matrix[i][j];
		}
	}
	*/

	// Show input matrix
	for (unsigned int i=0; i<__N__; ++i) {
		for (unsigned int j=0; j<__N__; ++j) {
			cout << setw(3) << matrix[i][j] << " ";
		}
		cout << endl;
	}

	int max = matrix[0][1];
	for (unsigned int i=0; i<__N__; ++i) {
		for (unsigned int j=0; j<__N__; ++j) {
			if (j<=i) {
				continue;
			}
			if (matrix[i][j] > max) {
				max = matrix[i][j];
			}
		}
	}

	cout << "Max element is: " << max << endl;
	return 0;
}