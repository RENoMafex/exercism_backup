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
	std::string iput = {};
	for (char i : input) {if (i != ' ') {iput.push_back (i);}} //Strip spaces
	for (char i : iput) {if (i < '0' || i > '9') {return false;}} //Exit if there are non-numerics
	if (iput.length() < 2) {return false;} //Exit if string is to short
	return luhnify (iput);
}  // valid()
}  // namespace luhn

