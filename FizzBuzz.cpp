#include <iostream>
using namespace std;

int main() {
	// Change it to your own preference
	int maxNumber = 100; 

	for (int num = 1; num <= maxNumber; num++) {
		if ((num % 15) == 0) {
			cout << "FizzBuzz\n";
		}
		else if ((num % 3) == 0) {
			cout << "Fizz\n";
		}
		else if ((num % 5) == 0) {
			cout << "Buzz\n";
		}
		else {
			cout << num << "\n";
		}
	}
	// Just a stop, so you can actually see the output
	system("pause");
}
