#include <iostream>
using namespace std;

int main() {
	int smallest=99999, largest=0, evenNum = 0, oddNum = 0, value;
	bool done = false;

	while (!done) {
		cout << "Enter number or Q to quit: ";
		cin >> value;
		cout << "\n";
		if (cin.fail()) {
			done = true;
			cout << "Largest value: " << largest << "   Smallest value: " << smallest << endl;
			cout << "Even number count: " << (evenNum) << "   Odd number count: " << oddNum << endl;
		}
		else {
			if (value % 2 == 0)
				evenNum++;
			else
				oddNum++;

			if (value <= smallest)
				smallest = value;
			else if (value > largest)
				largest = value;
		}
	}
	return 0;
}