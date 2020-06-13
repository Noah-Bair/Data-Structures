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
		myfront->data = x;
		myfront->next = myback;
	} else {
		qnode *newNode = new qnode;
		newNode->data = x;
		myback->next = newNode;
		myback = newNode;
	}
}

// Retrieve the data at the front of the Queue
bool Queue::Front(QueueElement &x) {
	return myfront->data;
}

// Remove the value at the front of the Queue
void Queue::RemoveQ() { // << TODO: Needs work!
	qnode *rmv = myfront;
	myfront = myfront->next;
	delete rmv;
}

// Displays the data stored in the Queue from front to back
void Queue::display() {
	if (empty()) {
		cout << "The list is empty!";
		return;
	} else {
		qnode *node = new qnode;
		node = myfront;
		while (node != myback) {
			node = node->next;
			cout << node->data << endl;
		}
	}
}