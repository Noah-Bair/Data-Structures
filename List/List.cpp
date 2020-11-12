#include "List.h"
#include <iostream>
using namespace std;

// Create an empty list
List::List() {
	N = 0;
}

// Return true if the list is empty, otherwise return false
bool List::Empty() {
	if (N == 0) {
		return true;
	} else {
		return false;
	}
}

// Insert a value x on the end of the list
void List::InsertAtEnd(ElementType x) {
	listArray[N] = x;
	N++;
}

// 	If value x is in the list, remove x
void List::Delete(ElementType x) {
	for (int i = 0; i < N; ++i) {
		if (listArray[i] == x) {
			// Item found here
			for (int j = i; j < N; ++j) {
				listArray[j] = listArray[j + 1];
			}
			--i; // << Reexamine the same location again after the shift
			N--;
		}
	}
}

// Display the data values in the list in the order inserted
void List::Display() {
	cout << "List Contents:\n";

	for (int i = 0; i < N; ++i) {
		cout << listArray[i] << " ";
	}
	cout << "\n";
}

// Compute and return the sum of the values in the list
int List::Sum() {
	int sum = 0;
	for (int i = 0; i < N; ++i) {
		sum += listArray[i];
	}
	return sum;
}

// Compute and return the average of the values in the list
int List::Average() {
	if (Empty()) {
		cout << "Error: Unable to divide by 0!";
		return -1; // << Try to handle error case.
	}
	return Sum() / N;
}
