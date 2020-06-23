#ifndef BINARY_SEARCH_H
#define BINARY_SEARCH_H
using namespace std;

/*
 struct dish {
 int dishNumber;
 int counter;
 };

 typedef dish ElementType; */

struct node {
	int dishNumber;
	int counter;
	node *leftchild;
	node *rightchild;

	//ElementType data;
	//node *leftchild;
	//node *rightchild;
};

class BinarySearchTree {
public:
	BinarySearchTree();
	bool empty();
	bool Insert(int dishNum);
	bool IsThere(int dishNum);
	void Display();

private:
	node *root;
};

#endif
