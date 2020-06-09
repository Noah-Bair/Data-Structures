#ifndef STACK_H
#define STACK_H
#include <iostream>

typedef int StackElement;

struct node {
	StackElement data;
	node *next;
};

class Stack {
public:
	Stack();
	bool empty();
	void push(StackElement x);
	bool Top(StackElement &x);
	void pop();
	void display();

private:
	node *mytop;
};

#endif