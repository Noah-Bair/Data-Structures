#ifndef LIST_H
#define LIST_H
typedef int ElementType;
const int MAX = 100;

class List {
public:
	List();
	bool Empty();
	void InsertAtEnd(ElementType x);
	void Delete(ElementType x);
	void Display();
	int Sum(); // << Double would be better
	int Average(); // << Double would be better

private:
	int N;
	ElementType listArray[MAX];
};

#endif
