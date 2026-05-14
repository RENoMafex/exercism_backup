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
		exponent /= 2;
		base *= base;
	}  // while
	return result;
}  // power()

int to_decimal (std::string_view input) {
	int output = 0;
	for (int i = 0; i < (int) input.length(); i++) {
		output = output * 3 + ascii_trinary_to_int (input.at (i));
	}  // for

	return output;
}  // to_decimal()
}  // namespace trinary
