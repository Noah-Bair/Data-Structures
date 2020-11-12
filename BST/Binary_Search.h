#ifndef BINARY_SEARCH_H
#define BINARY_SEARCH_H

using namespace std;

struct node {
	int dishNumber;
	int counter;
	node *leftchild;
	node *rightchild;
};

class BinarySearchTree {
public:
	BinarySearchTree();
	bool empty();
	bool Insert(int dishNum);
	bool IsThere(int dishNum);
	void Display();
	void InOrder(node*);

private:
	node *root;
};

#endif