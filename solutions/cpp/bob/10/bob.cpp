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
	unsigned int upper = 0;
	for (const char c : string) {
		if (std::islower (c)) return false;
		if (std::isupper (c)) upper++;
	}
	return upper > 0;
}


std::string hey (std::string_view input) {
	const bool question = is_question(input);
	const bool yell = is_yell(input);
	const bool silence = is_silence(input);

	if (question && yell)	return "Calm down, I know what I'm doing!";
	if (question)			return "Sure.";
	if (yell)				return "Whoa, chill out!";
	if (silence)			return "Fine. Be that way!";

	return "Whatever.";
}

}  // namespace bob
