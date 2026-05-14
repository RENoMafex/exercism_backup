#include "trinary.h"

namespace trinary {
// TODO: add your solution here
int ascii_to_int (int input) {
	if (input >= '0' && input <= '9') {
		return input - '0';
	} else {
		return 0;
	}  // if else
}  // ascii_to_int()

int power (int base, int exponent) {
	int result = 1;
	for (int i = 0; i < exponent; i++) {
		result *= base;
	}  // for
	return result;
}  // power()

int find_length (const char* input) {
	int i = 0;
	while (input [i] != '\0') {
		i++;
	}
	return i;
}

int to_decimal (const char* input) {
	int output = 0;
	int string_length = find_length (input);
	int j = 0;
	for (int i = string_length; i >= 0; i--) {
		output += ascii_to_int (input [i - 1]) * power (3, j);
		j++;
	}  // for

	return output;
}  // to_decimal()
}  // namespace trinary
