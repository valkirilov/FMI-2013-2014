/*
 *  OOP
 *  FMI SU "St. Kliment Ohridski"
 *   
 *  Valentin Kirilov
 *  val.kirilov@gmail.com
 *  valkirilov.com
 *
 *  19 May 2014
 *
 */

#include <iostream>
#include <string>
#include <map>

using namespace std;

// Computes the median of the collection. (A median is the middle element of a collection)
template<class T>
T median(T* collection, int size) {
	return collection[size/2];	
}

// Computes the mode of the collection. (A mode is the element found most often in the collection)
template<class T>
T mode(T* collection, int size) {
	T modeElement;
	T currentElement;

    int maxElementCount = 0;
    int elementCount;

    for(int i=0; i<size; i++) {
    	currentElement = collection[i];
    	elementCount = 0;

    	// Count how many times we have this element in the collection
        for(int j=0; j<size; j++) {
            if(collection[j] == currentElement) {
                elementCount++;
            }
    	}
        
        // Check if this is our new mode
        if(maxElementCount < elementCount) {
            maxElementCount = elementCount;
            modeElement = currentElement;
        }
    }

    return modeElement;
}

// Computes the arithmetic average of the collection. 
template<class T>
T average(T* collection, int size) {
	T sum = accumulate(collection, size);

	return sum / size;
}

// Accumulates all elements in the collection using the + operator
template<class T>
T accumulate(T* collection, int size) {
	T result = collection[0];
	for (int i=0; i<size; i++) {
		result += collection[i];
	}
	return result;
}

// Returns true if all elements in the collection can be evaluated to true
template<class T>
bool all(T* collection, int size) {
	for (int i=0; i<size; i++) {
		if (collection[i] == false) {
			return false;
		}
	}
	return true;
}

// Returns true if any element in the collection can be evaluated to true
template<class T>
bool any(T* collection, int size) {
	for (int i=0; i<size; i++) {
		if (collection[i] == true) {
			return true;
		}
	}
	return false;
}

// Casts all elements in the collection from T1 to T2 using static_cast
template<class T1, class T2>
T2* cast(T1* collection, int size) {
	T2* newCollection = new T2[size];

	for (int i=0; i<size; i++) {
		newCollection[i] = static_cast<T2>(collection[i]);
	}

	return newCollection;
}

// Returns the maximum element in the collection. Note: this method should work for any type that has implemented the < operator 
template<class T>
T max(T* collection, int size) {
	T max = collection[0];

	for (int i=1; i<size; i++) {
		if (max < collection[i]) {
			max = collection[i];
		}
	}

	return max;
}

// Returns the minimum element in the collection. Note: this method should work for any type that has implemented the < operator
template<class T>
T min(T* collection, int size) {
	T min = collection[0];

	for (int i=1; i<size; i++) {
		if (min > collection[i]) {
			min = collection[i];
		}
	}

	return min;
}

// Returns a new collection that whose items are in reverse order.
template<class T>
T* reverse(T* collection, int size) {
	T* newCollection = new T[size];
	size--;

	for (int i=0; i<=size/2; i++) {
		newCollection[i] = collection[size-i];
	}

	return newCollection;
}

// Returns a new collection that contains only the first n elements of the given collection
template<class T>
T* take(T* collection, int size, int n) {
	T* newCollection = new T[n];

	for (int i=0; i<n; i++) {
		newCollection[i] = collection[i];
	}

	return newCollection;
}

// Returns a new collection that contains only all but the first n elements of the given collection
template<class T>
T* skip(T* collection, int size, int n) {
	T* newCollection = new T[size-n];

	for (int i=0; i<(size-n); i++) {
		newCollection[i] = collection[i+n];
	}

	return newCollection;
}

// This is my function for printing the collections
template<class T>
void printCollection(T* collection, int size) {
	for (int i=0; i<size; i++) {
		cout << collection[i] << " ";
	}
	cout << endl;
}

int main() {


	int numbers[] = { 0, 1, 2, 3, 4, 4, 5, 6, 7 };
	string strings[] = { "batman", "superman", "mickey mouse", "spinderman", "uti bachvarov" };
	int zeros[] = { 0, 0, 0, 0, 0 };

	int numbers_len = 9,
	    strings_len = 5,
	    zeros_len = 5;


	// Test the median function
	//cout << median(numbers, numbers_len) << endl; // mickey mouse
	cout << median(strings, strings_len) << endl; // mickey mouse
	//cout << median(zeros, zeros_len) << endl; // mickey mouse

	cout << mode(numbers, numbers_len) << endl; // 4
	cout << average(numbers, numbers_len) << endl; // 3
	cout << accumulate(numbers, numbers_len) << endl; // 32
	cout << accumulate(strings, strings_len) << endl; // "batmansupermanmickey mousespindermanuti bachvarov"
	cout << all(zeros, zeros_len) << endl; // false
	cout << all(numbers, numbers_len) << endl; // false
	cout << all(&numbers[1], numbers_len - 1) << endl; // true
	
	cout << any(zeros, zeros_len) << endl; // false
	cout << any(numbers, numbers_len) << endl; // true
	
	cout << max(numbers, numbers_len) << endl; // 7
	cout << min(numbers, numbers_len) << endl; // 0
	
	string* reversedStrings = reverse(strings, strings_len); // { "uti bachvarov", "spinderman",  "mickey mouse", "superman", "batman"};
	string* takeStrings = take(strings, strings_len, 2); // { "batman", "superman" }
	string* skipStrings = skip(strings, strings_len, 2); // { "mickey mouse", "spinderman", "uti bachvarov" }

	// double doubles[] = { 0.5, 1.5, 2.5, 3.5, 4.5, 4.5, 5.5, 6.5, 7.5 };
	// int* casted = cast<double, int>(doubles, numbers_len);
	// printCollection(casted, numbers_len);

	return 0;
}