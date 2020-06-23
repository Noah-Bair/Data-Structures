#include <iostream>
#include "Binary_Search.h"
using namespace std;

BinarySearchTree::BinarySearchTree() {
	root = NULL;
}

// Return true if the tree is empty, otherwise return false
bool BinarySearchTree::empty() {
	if (root == NULL) {
		return true;
	} else {
		return false;
	}
}

// Insert a value x
bool BinarySearchTree::Insert(int dishNum) {
	struct node *ptr = root;


}

// Return true if dishNum is in the tree, otherwise return false
bool BinarySearchTree::IsThere(int dishNum) {

}

// Display the data stored from smallest to largest based on dish number
void BinarySearchTree::Display() {

	cout << "List of all dishes ordered:\n\n";

	cout << "1 - Fried Chicken" << "	Ordered\n";
	cout << "2 - Pork Chops" << "		Ordered\n";
	cout << "3 - Baked Chicken" << "	Ordered\n";
	cout << "4 - Grilled Salmon" << "	Ordered\n";
	cout << "5 - Roast Beef" << "		Ordered\n";
	cout << "6 - Grilled Steak" << "	Ordered\n";
	cout << "7 - Meat Loaf" << "		Ordered\n";
}
