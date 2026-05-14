#include "bob.h"

namespace bob {

bool is_question (std::string_view string) {
	for (int i = string.size() - 1; i > 0; i--) {
		const char c = string.at(i);
		if (std::isspace (c)) continue;
		return c == '?';
	}
	return false;
}

std::string hey (std::string_view input) {
	//initialize variables
	unsigned int upper = 0;
	unsigned int punct = 0;
	unsigned int digit = 0;
	unsigned int white = 0;

	//categorize chars in string
	for (const char c : input) {
		if (std::isspace (c)) {
			white++;
		}
		if (std::isupper (c)) {
			upper++;
		}
		if (std::ispunct (c)) {
			punct++;
		}
		if (std::isdigit (c)) {
			digit++;
		}
	}

	//return after checking, which kind the input is
	if (input.length() == white) return "Fine. Be that way!";
	if (input.length() - (white + punct + digit) == upper && upper) {
		return (is_question(input)) ? "Calm down, I know what I'm doing!" : "Whoa, chill out!";
	} //done in multiple lines because my screen is small
	if (is_question (input)) return "Sure.";
	return "Whatever."; //if nothing else fits
}

}  // namespace bob
