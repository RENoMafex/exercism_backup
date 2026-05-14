#include "luhn.h"

namespace luhn {

int luhnify (std::vector <int> input) {
	int sum = 0;
	for (size_t i = 0; i < input.size(); i++) {
		int digit = input.at (input.size() - 1 - i);
		if (i % 2) {
			digit *= 2;
			if (digit > 9) digit -= 9;
			sum += digit;
		} else {
			sum += digit;
		}
	}
	return sum;
}

bool valid (std::string_view input) {
	std::vector <int> clean_input = {}; //Variable for cleaned up input
	for (const char c : input) {
		if (c >= '0' && c <= '9') {
			clean_input.push_back (c - '0'); // Append number to the cleaned up string
		} else if (c != ' ') {
			return false; // Exit if there are non-numerics
		}
	}
	return clean_input.size() >= 2 && luhnify (clean_input) % 10 == 0;
}  // valid()
}  // namespace luhn

