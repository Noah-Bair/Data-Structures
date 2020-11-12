#include "Stack.h"
#include "Queue.h"
#include <iostream>
using namespace std;

int main() {
	Stack S;
	Queue Q;

	// Insert values 10, 20, 30, 40 and 50 onto the stack
	for (int x = 1; x <= 5; x++) {
		int n = x * 10;
		S.push(n);
		Q.AddQ(n);
	}

	// Display the content of the stack and queue to the screen
	cout << "Content of Stack:" << endl;
	S.display();
	cout << endl << endl;
	cout << "Content of Queue:" << endl;
	Q.display();
	cout << endl << endl;

	// Remove and display each value on the stack
	cout << "Removing values from Stack:" << endl;
	while (!S.empty()) {
		int x;
		S.Top(x);
		cout << endl << endl;
		cout << "Popping: " << x << endl;
		S.pop();
		S.display();
	}

	if (S.empty())
		cout << "Stack is empty.\n" << endl;

	// Remove and display each values on the Queue
	cout << "Removing values from Queue:" << endl;
	while (!Q.empty()) {
		int x;
		Q.Front(x);
		cout << endl << endl;
		cout << "Removing: " << x << endl;
		Q.RemoveQ();
		Q.display();
	}

	if (Q.empty())
		cout << "Queue is empty.\n" << endl;
}
