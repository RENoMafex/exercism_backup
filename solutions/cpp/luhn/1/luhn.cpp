#include "luhn.h"

namespace luhn {

// TODO: add your solution here

bool valid (std::string_view input) {
	std::string iput = {};
	int oput = {};
	//Clean up input
	for (char i : input) {if (i != ' ') {iput.push_back (i);}} //Strip spaces
	for (char i : iput) {if (i < '0' || i > '9') {return false;}} //Exit if there are non-numerics
	if (iput.length() < 2) {return false;} //Exit if string is to short

	for (int i = iput.length() - 1, j = 0; i >= 0; i--, j++) {
		if (j % 2) {
			int temp = iput.at (i) - '0';
			temp *= 2;
			if (temp > 9) {temp -= 9;}
			oput += temp;
		} else {
			int temp = iput.at (i) - '0';
			oput += temp;
		}
	}
	if (oput % 10 != 0) {return false;}

	return true;
}  // valid()
}  // namespace luhn

