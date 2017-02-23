#include "stringcalc.h"
#include <iostream>
#include <string>

using namespace std;

int main() {

	string input;
	StringCalc calc;

	cout << "Enter a string of ints separated by commas. Enter X to quit: ";	cin >> input;
	while (input != "X") {
		cout << calc.add(input) << endl;
		cout << "Enter another string, or X to quit: ";
		cin >> input;
		cout << endl;
	}
}
