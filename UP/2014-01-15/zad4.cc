
// да се напише функция, която намира и връща като резултат конкатенацията
// на два низа. Функцияга да променя първия си аргумент като в резултат той 
// също да съдържа конкатенацията на низовете

#include <iostream>
#include <cstring>
using namespace std;

string concatStrings(char *str1, char *str2) {
	int str1Length = strlen(str1);
	int str2Length = strlen(str2);
	char returnString[str1Length+str2Length];

	int i = 0;
	for (i=0; i < str1Length; i++) {
		returnString[i] = str1[i];
	}
	for (i=str1Length; i < (str1Length+str2Length); i++) {
		returnString[i] = str2[i-str1Length];
	}
	
	returnString[i] = '\0';
	str1 = returnString;
	return str1;
}

int main() {

	char *str1 = "Hello ";
	char *str2 = " CPP world!";

	cout << concatStrings(str1, str2) << endl;

	return 0;
}