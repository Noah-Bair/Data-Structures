#include "Stack.h"
#include <iostream>
using namespace std;

// Create an empty stack
Stack::Stack() {
	mytop = new node();
	mytop->data = NULL;
	mytop->next = NULL;
}

// Return true if stack is empty, otherwise return false
bool Stack::empty() {
	if (mytop->data == NULL) {
		return true;
	} else {
		return false;
	}
}

// Add a new value to the top of the stack
void Stack::push(StackElement x) {
	if (empty()) {
		mytop->data = x;
	} else {
		struct node *prev = mytop;
		node *top = new node();
		top->data = x;
		top->next = prev;
		mytop = top;
	}
}

// Retrieves the data that is at the top of the stack
bool Stack::Top(StackElement &x) {
	x = mytop->data;
	return mytop->data;
}

// Removes the value at the top of the stack
void Stack::pop() {
	if (mytop->next == NULL) {
		mytop->data = NULL;
	} else {
		struct node *ptr = mytop;
		mytop = mytop->next;
		delete ptr;
	}
}

// Displays the data stored in the stack
void Stack::display() {
	struct node *ptr = mytop;

	if (empty()) {
		return;
	}
	cout << ptr->data << " ";
	while (ptr->next != NULL) {
		ptr = ptr->next;
		cout << ptr->data << " ";
	}
}
