#include "Queue.h"
#include <iostream>
using namespace std;

// Create an empty Queue
Queue::Queue() {
	myfront = new qnode();
	myfront->data = NULL;
	myfront->next = NULL;
	myback = myfront;
}

// Return true if Queue is empty, otherwise return false
bool Queue::empty() {
	if (myfront->data == NULL) {
		return true;
	} else {
		return false;
	}
}

// Add a new value to the back of the Queue
void Queue::AddQ(QueueElement x) {
	if (empty()) {
		myfront->data = x;
		myfront->next = myback;
	} else if (myback->data == NULL) {
		myback->data = x;
	} else {
		struct qnode *ptr = new qnode();
		ptr->data = x;
		myback->next = ptr;
		myback = ptr;
	}
}

// Retrieve the data at the front of the Queue
bool Queue::Front(QueueElement &x) {
	x = myfront->data;
	return myfront->data;
}

// Remove the value at the front of the Queue
void Queue::RemoveQ() {
	if (myfront->next == NULL) {
		myfront->data = NULL;
		myback = myfront;
	} else {
		struct qnode *ptr = myfront;
		myfront = myfront->next;
		delete ptr;
	}
}

// Displays the data stored in the Queue from front to back
void Queue::display() {
	struct qnode *ptr = myfront;

	if (empty()) {
		return;
	}
	cout << ptr->data << " ";
	while (ptr != myback) {
		ptr = ptr->next;
		cout << ptr->data << " ";
	}
}
