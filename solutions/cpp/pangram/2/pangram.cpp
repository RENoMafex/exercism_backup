#include "pangram.h"

namespace pangram {

bool is_pangram(std::string_view input_view) {
	std::string input = {};
	// make string lowercase and strip spaces
	for (const char c : input_view) {
		if (!std::isalpha(c)) continue;
		input.push_back(std::tolower(c));
	}

	// if any char cant be found, return false
	for (char c = 'a'; c <= 'z'; c++) {
		if (input.find(c) == input.npos) return false;
	}

	// this part of the programm gets only reached when every character is found in the string.
	return true;
}

}  // namespace pangram
