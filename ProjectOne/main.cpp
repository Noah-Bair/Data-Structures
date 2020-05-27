#include "List.h"
#include <string>
#include <iostream>
using namespace std;

int main() {

	int ch = 1; // << Running state
	List list;

	cout << "List - Array Implementation Menu!\n";

	while (ch != 0) {
		cout << "Option 1: Insert a number into the list.\n";
		cout << "Option 2: Delete a number from the list.\n";
		cout << "Option 3: Display the current list contents.\n";
		cout << "Option 4: Return the sum of the numbers in the list.\n";
		cout << "Option 5: Return the average of numbers in the list.\n";
		cout << "Option 6: Exit the program.\n";
		cin >> ch;

		switch (ch) {
		int input;
		case 1:
			cout << "Number to be inserted: ";
			cin >> input;
			list.InsertAtEnd(input);
			break;
		case 2:
			cout << "Number to be deleted: ";
			cin >> input;
			list.Delete(input);
			break;
		case 3:
			cout << "Option 3 selected.\n";
			list.Display();
			break;
		case 4:
			cout << "Option 4 selected.\n";
			cout << "Sum = " << list.Sum() << "\n";
			cout << "\n";
			break;
		case 5:
			cout << "Option 5 selected.\n";
			cout << "Average = " << list.Average() << "\n";
			cout << "\n";
			break;
		case 6:
			cout << "Option 6 selected.\nProgram Terminated!\n";
			exit(0);
		default:
			cout << "Invalid Choice! Please select an input between 1-6.\n\n";
		}
	}
}
