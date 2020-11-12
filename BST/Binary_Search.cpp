#include <iostream>
#include "Binary_Search.h"
using namespace std;

BinarySearchTree::BinarySearchTree() {
	root = new node();
	root->dishNumber = 0;
	root->counter = 0;
	root->leftchild = root->rightchild = nullptr;
}

// Return true if the tree is empty, otherwise return false
bool BinarySearchTree::empty() {
	if (root == nullptr) {
		return true;
	} else {
		return false;
	}
}

// Insert a value dishNum
bool BinarySearchTree::Insert(int dishNumber) {
	node *newnode = new node();
	newnode->dishNumber = dishNumber;
	newnode->counter = 1;
	newnode->leftchild = newnode->rightchild = nullptr;

	node *x = root;
	node *y = nullptr;

	while (x != nullptr) {
		y = x;
		if (dishNumber < x->dishNumber) {
			x = x->leftchild;
		} else {
			if (x->dishNumber == dishNumber) {
				x->counter++;
				return false;
			}
			x = x->rightchild;
		}
	}

	if (y == nullptr) {
		root = newnode;
	} else if (dishNumber < y->dishNumber) {
		y->leftchild = newnode;
	} else {
		y->rightchild = newnode;
	}
	return true;
}

// Return true if dishNum is in the tree, otherwise return false
bool BinarySearchTree::IsThere(int dishNumber) {
	node *x = root;
	node *y = nullptr;

	while (x != nullptr) {
		y = x;
		if (dishNumber < x->dishNumber) {
			x = x->leftchild;
		} else {
			if (x->dishNumber == dishNumber) {
				return true;
			}
			x = x->rightchild;
		}
	}
	return false;
}

// Display the data stored from smallest to largest based on dish number
void BinarySearchTree::Display() {
	InOrder(root);
}

void BinarySearchTree::InOrder(node *root) {
	if (root == nullptr) {
		return;
	} else {
		InOrder(root->leftchild);
		if (root->dishNumber == 0) {
			// Do nothing this was initial root = 0
			cout << "List of all dishes ordered:\n";
		} else if (root->dishNumber == 1) {
			cout << "1 - Fried Chicken\t" << root->counter << " Ordered\n";
		} else if (root->dishNumber == 2) {
			cout << "2 - Pork Chops\t\t" << root->counter << " Ordered\n";
		} else if (root->dishNumber == 3) {
			cout << "3 - Baked Chicken\t" << root->counter << " Ordered\n";
		} else if (root->dishNumber == 4) {
			cout << "4 - Grilled Salmon\t" << root->counter << " Ordered\n";
		} else if (root->dishNumber == 5) {
			cout << "5 - Roasted Beef\t" << root->counter << " Ordered\n";
		} else if (root->dishNumber == 6) {
			cout << "6 - Grilled Steak\t" << root->counter << " Ordered\n";
		} else if (root->dishNumber == 7) {
			cout << "7 - Meat Loaf\t\t" << root->counter << " Ordered\n";
		} else {
			// Nothing
		}
		InOrder(root->rightchild);
	}
}