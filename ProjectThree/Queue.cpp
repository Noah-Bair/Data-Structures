#include "Queue.h"
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
	if (empty()) { // << Assign value to front when empty
		myfront->data = x;
		myfront->next = myback;
	}

	if (myback->data == NULL) { // << Assign data to back of list if empty
		myback->data = x;
	} else {
		qnode *Queue = new qnode();
		Queue->data = x;
		myback->next = Queue;
		myback = Queue;
	}
}

// Retrieve the data at the front of the Queue
bool Queue::Front(QueueElement &x) {
	return myfront->data;
}

// Remove the value at the front of the Queue
void Queue::RemoveQ() {
	if (myfront->next = NULL) { // << Save off pointer to first node in this case
		myfront->data = NULL;
		myback = myfront;
	} else {
		qnode *del = myfront;
		myfront = myfront->next;
		delete del;

	}
}

// Displays the data stored in the Queue from front to back
void Queue::display() {
	if (empty()) {
		cout << "No data is in the list!";
	} else {
		// TODO: Display queue contents
	}
}