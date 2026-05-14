#include "trinary.h"

namespace trinary {
int ascii_trinary_to_int (int input) {
	if (input >= '0' && input <= '2') {
		return input - '0';
	} else {
		return 'x';
	}  // if else
}  // ascii_trinary_to_int()

int power (int base, int exponent) {
	int result = 1;
	while (exponent) {
		if (exponent % 2) {
			result *= base;
		}  // if
		exponent /= 2;
		base *= base;
	}  // while
	return result;
}  // power()

int to_decimal (std::string_view input) {
	int output = 0;
	for (int i : input) {
		if (ascii_trinary_to_int (i) == 'x') {return 0;}
		output = output * 3 + ascii_trinary_to_int (i);
	}  // for

	return output;
}  // to_decimal()
}  // namespace trinary
