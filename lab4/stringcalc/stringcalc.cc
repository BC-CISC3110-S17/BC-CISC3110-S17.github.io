#include "stringcalc.h"
#include <string>
#include <ctype.h>
#include <stdlib.h>
#include <iostream>

int StringCalc::add(std::string numbers) {
	int sum = 0;

	for (int i=0; i< numbers.length(); i++) {

		if (isdigit(numbers[i])) {
			std::string stringToConvert = numbers.substr(i,1);
			sum += atoi(stringToConvert.c_str());
		}
	}
	return sum;
}
