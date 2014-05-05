
// Да се напишат функции, които въвеждат и извеждат елементите на 
// едномерен масив от цели числа, като се използват тези функциии 
// да се напише програма, която въвежда радица от естествени числа, след което я извежда

#include <iostream>
using namespace std;

int* readArray() {

}

void writeArray(int *array) {
	for (unsigned int index=0; index<(sizeof(array)/sizeof(*array)); ++index) {
		cout << "array[" << index << "] = " << array[index] << endl;
	}
}

void staticArrayRead(int arr[]) {
	for (int i=0; i<sizeof(arr); ++i) {
		cin >> arr[i];
	}
}

void staticArrayWrite(int arr[]) {
	for (int i=0; i<(sizeof(arr)/sizeof(int)); ++i) {
		cout << "array["<< i <<"] = " << arr[i] << endl;	
	}
}

void witghLength(int *array, int arrayLength);

int main() {

	//int* array = readArray;
	//writeArray(array);

	int staticArr[3];
	staticArrayRead(staticArr);
	staticArrayWrite(staticArr);

	return 0;
}