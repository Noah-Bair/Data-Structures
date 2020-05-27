#include "List.h"
#include <iostream>
using namespace std;

// Create an empty list
List::List() {
	first = new node;
	first->data = NULL; // << Needed for empy check
	first->next = NULL;
}

// Return true if the list is empty, otherwise return false
bool List::Empty() {
	if (first->data == NULL) {
		return true;
	} else {
		return false;
	}
}

// Insert a value x on the end of the list
void List::InsertAtEnd(ElementType x) {
	if (Empty()) {
		// If empty assign first value
		first->data = x;
	} else {
		node *ptr = first;

		while (ptr->next != NULL) {
			ptr = ptr->next;
		}
		node *newNode = new node;
		ptr->next = newNode;
		newNode->data = x;
		newNode->next = NULL;
	}
}

// If value x is in the list, remove x
void List::Delete(ElementType x) {
	node *ptr = first;

	//if first node contains the value, it is deleted
	if (ptr->data == x) {
		first = first->next;
		delete ptr;
	}

	while (ptr->next != NULL) {
		node *nextNode = ptr->next;

		if (nextNode->data == x) {
			ptr->next = nextNode->next;
			delete nextNode; // << Deallocate memory for node
		}
		ptr = ptr->next;
	}

}

// Display the data values in the list in the order inserted
void List::Display() {
	struct node *ptr = first;

	cout << "List Contents:\n";
	while (ptr != NULL) {
		cout << ptr->data << " ";
		ptr = ptr->next;
	}
	cout << "\n";
}

// Compute and return the sum of the values in the list
int List::Sum() {
	node *ptr = first;
	int sum = 0;

	sum += ptr->data;
	while (ptr->next != NULL) {
		ptr = ptr->next;
		sum += ptr->data;
	}
	return sum;
}

// Compute and return the average of the values in the list
int List::Average() {
	node *ptr = first;
	int count = 0, sum = 0;
	sum += ptr->data;

	while (ptr != NULL) {
		ptr = ptr->next;
		sum += ptr->data;
		++count;
	}
	return Sum() / count;
}

