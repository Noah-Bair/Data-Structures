#include "Queue.h"
using namespace std;

// Create an empty Queue
Queue::Queue() {
	myfront = myback = NULL;
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
		// Only one node 
	} else {
		// More than one node
	}
}

// Retrieve the data at the front of the Queue
bool Queue::Front(QueueElement &x) {
	return myfront->data;
}

// Remove the value at the front of the Queue
void Queue::RemoveQ() {
	// TODO
}

// Displays the data stored in the Queue from front to back
void Queue::display() {
	if (empty()) {
		cout << "The list is empty!";
		return;
	}

	Node *front = myfront;
	while (front) {
		cout << front->data << " ";
		front = front->next;
	}
	cout << endl;
}
