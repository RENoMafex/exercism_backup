#include "bob.h"

namespace bob {

bool is_question (std::string_view string) {
	std::string no_whitespaces = {};
	for (const char c : string) {
		if (c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == '\v') continue;
		no_whitespaces.push_back (c);
	}
	return (no_whitespaces.back() == '?') ? true : false;
}

std::string hey (std::string_view input) {
	//initialize variables
	unsigned int upper = 0;
	unsigned int punct = 0;
	unsigned int digit = 0;
	unsigned int white = 0;

	//categorize chars in string;
	for (const char c : input) {
		if (c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == '\v') {
			white++;
		}
		if (std::isupper (c)) { // Here locale should be rebust enough
			upper++;
		}
		if (std::ispunct (c)) { //also here
			punct++;
		}
		if (std::isdigit (c)) { //here too
			digit++;
		}
	}

	if (input.length() == white) return "Fine. Be that way!";
	if (input.length() - (white + punct + digit) == upper && upper) {
		return (is_question(input)) ? "Calm down, I know what I'm doing!" : "Whoa, chill out!";
	} //done in multiple lines because my screen is small.
	if (is_question (input)) return "Sure.";
	return "Whatever."; //if nothing else fits.
}

}  // namespace bob
