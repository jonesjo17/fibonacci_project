/*
*
*	Fibonacci.cpp
*	A program that requests an integer
*	input from the user, called n. The 
*	program then outputs the Fibonacci
*	sequence up to and including n.
*	Author: Jesse Jones
*	Date: 11/30/18
*
*/

#include <iostream>
using namespace std;

class Fibonacci {

	public:

	int fibonacci (int x) {
		if (x <= -1) {
			return -1; // error
		} else if (x == 0) {
			return 0; // first digit in fibonacci sequence
		} else if (x == 1) {
			return 1; // second digit in fibonacci sequence
		} else {
			return fibonacci(x - 1) + fibonacci(x - 2); // sum of previous two (ie. the fibonacci sequence)
		}
	}

};

int main() {

	Fibonacci fibo;
	int arrayFibo[100];
	int n = 0;

	cout << "Please input a number: ";
	cin >> n;

	cout << "Your fibonacci sequence is: ";

	for (int i = 0; i <= n; i++) {
		fibo.fibonacci(n);
		cout << arrayFibo[n];
		if (n > 0) {
			cout << ", ";
		} else {
			cout << "\n";
		}
		n = n - 1;
	} 

	return 0;

}
