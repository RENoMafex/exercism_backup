#include "luhn.h"

namespace luhn {

bool luhnify (std::string_view input) {
	int oput = 0;
	for (int i = input.length() - 1, j = 0; i >= 0; i--, j++) {
		if (j % 2) {
			int temp = input.at (i) - '0';
			temp *= 2;
			if (temp > 9) {temp -= 9;}
			oput += temp;
		} else {
			int temp = input.at (i) - '0';
			oput += temp;
		}
	}
	if (oput % 10) {return false;}
	else {return true;}
}

bool valid (std::string_view input) {
	std::string iput = {}; //Variable for cleaned up input
	for (char i : input) {
		if (i == ' ') { //Strip spaces
			continue;
		} else
		if (i >= '0' && i <= '9') {
			iput.push_back (i); // Append number to the cleaned up string
		} else {
			return false; // Exit if there are non-numerics
		}
	}
	if (iput.length() < 2) {return false;} //Exit if string is to short
	return luhnify (iput);
}  // valid()
}  // namespace luhn

