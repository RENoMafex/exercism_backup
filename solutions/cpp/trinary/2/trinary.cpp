#include "trinary.h"

namespace trinary {
int ascii_trinary_to_int (int input) {
	if (input >= '0' && input <= '2') {
		return input - '0';
	} else {
		return 0;
	}  // if else
}  // ascii_to_int()

int power (int base, int exponent) {
	int result = 1;
	while (exponent) {
		if (exponent % 2) {
			result *= base;
		}  // if
		base *= base;
		exponent--;
	}  // while
	return result;
}  // power()

int to_decimal (std::string_view input) {
	int output = 0;
	int j = 0;
	for (int i = input.length() - 1; i >= 0; i--) {
		output += ascii_trinary_to_int (input [i - 1]) * power (3, j);
		j++;
	}  // for
	return output;
}  // to_decimal()
}  // namespace trinary
