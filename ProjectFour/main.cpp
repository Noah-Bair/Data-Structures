#include <iostream>
#include "Binary_Search.h"

int main() {
	BinarySearchTree order;

	order.Insert(4);
	order.Insert(3);
	order.Insert(2);
	order.Insert(3);
	order.Insert(7);
	order.Insert(2);
	order.Insert(2);
	order.Insert(5);
	order.Insert(2);
	order.Insert(1);
	order.Insert(3);
	order.Insert(3);
	order.Insert(5);
	order.Insert(5);

	order.Display();
	//cout << order.IsThere(5) << endl;
	//cout << order.IsThere(0) << endl;
	//cout << order.IsThere(6) << endl;
}