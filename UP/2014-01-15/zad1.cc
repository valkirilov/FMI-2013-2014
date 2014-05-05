
// да се напише функция, която намира разстоянието на две точки в равнината зададени чрез координатите си

#include <iostream>
#include <cmath>
using namespace std;

double distanceBetweenPoints(double x1, double y1, double x2, double y2) {

	double dx = x2 - x1;
	double dy = y2 - y1;

	return sqrt(dx*dx + dy*dy);
}

int main() {

	double distance = distanceBetweenPoints(1, 1, 4, 2);
	cout << "Distance = " << distance << endl;

	return 0;
}