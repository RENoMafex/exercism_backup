#include "trinary.h"

namespace trinary {
int ascii_trinary_to_int (int input) {
	if (input >= '0' && input <= '2') {
		return input - '0';
	} else {
		return -1;
	}  // if else
}  // ascii_trinary_to_int()

int to_decimal (std::string_view input) {
	int output = 0;
	for (int i : input) {
		const int converted = ascii_trinary_to_int (i);
		if (converted == -1) {return 0;}
		output = output * 3 + converted;
	}  // for

	return output;
}  // to_decimal()
}  // namespace trinary
