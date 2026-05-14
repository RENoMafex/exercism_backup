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

bool is_silence (std::string_view string) {
	for (const char c : string) {
		if (!std::isspace (c)) return false;
	}
	return true;
}

bool is_yell (std::string_view string) {
	uint upper = 0;
	for (const char c : string) {
		if (std::islower (c)) return false;
		if (std::isupper (c)) upper++;
	}
	return upper > 0;
}


std::string hey (std::string_view input) {
	if (is_question (input) && is_yell (input)) return "Calm down, I know what I'm doing!";
	if (is_question (input))					return "Sure.";
	if (is_yell (input))						return "Whoa, chill out!";
	if (is_silence (input))						return "Fine. Be that way!";
	return "Whatever.";
}

}  // namespace bob
