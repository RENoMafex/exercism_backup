#include "pangram.h"

namespace pangram {

bool is_pangram(std::string_view input_view) {
	std::string input = {};
	// make string lowercase and strip spaces
	for (const char c : input_view) {
		if (!std::isalpha(c)) continue;
		input.push_back(std::tolower(c));
	}

	for (char c = 'a'; c <= 'z'; c++) {
		if (input.find(c) > 128) return false;
	}

	return true;
}

}  // namespace pangram
