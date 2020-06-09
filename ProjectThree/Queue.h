#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>

typedef int QueueElement;

struct qnode {
	QueueElement data;
	qnode *next;
};

class Queue {
public:
	Queue();
	bool empty();
	void AddQ(QueueElement x);
	bool Front(QueueElement &x);
	void RemoveQ();
	void display();

private:
	qnode *myfront;
	qnode *myback;
};

#endif
