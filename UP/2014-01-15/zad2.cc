
// да се напише функция която връща стойност true ако a,b и c са страни на триъгълник и false - в противен случай

#include <iostream>
using namespace std;

bool isATriangle(int a, int b, int c) {

	bool isReal = true;

	isReal = (a + b > c) ? isReal : false;
	isReal = (a + c > b) ? isReal : false;
	isReal = (b + c > a) ? isReal : false;

	return isReal;
}

int main() {

	cout << "3, 4, 5: is a triangle = " << isATriangle(3, 4, 5) << endl;
	cout << "3, 1, 5: is a triangle = " << isATriangle(3, 4, 5) << endl;
	cout << "3, 12, 5: is a triangle = " << isATriangle(3, 4, 5) << endl;

	return 0;
}