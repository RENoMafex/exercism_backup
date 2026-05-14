#include "luhn.h"

namespace luhn {

int luhnify (std::string_view input) {
	int output = 0;
	for (size_t i = 0; i < input.size(); i++) {
		if (i % 2) {
			int temp = input.at (input.size() - 1 - i) - '0';
			temp *= 2;
			if (temp > 9) temp -= 9;
			output += temp;
		} else {
			int temp = input.at (input.size() - 1 - i) - '0';
			output += temp;
		}
	}
	return output;
}

bool valid (std::string_view input) {
	std::string iput = {}; //Variable for cleaned up input
	for (char i : input) {
		if (i == ' ') continue; //strip spaces 
		if (i >= '0' && i <= '9') {
			iput.push_back (i); // Append number to the cleaned up string
		} else {
			return false; // Exit if there are non-numerics
		}
	}
	if (iput.length() < 2) return false; //Exit if string is to short
	if (luhnify (iput) % 10) return false;
	return true;
}  // valid()
}  // namespace luhn

