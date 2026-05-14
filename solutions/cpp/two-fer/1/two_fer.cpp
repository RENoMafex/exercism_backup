#include "two_fer.h"

namespace two_fer {
std::string two_fer(void) {
	return "One for you, one for me.";
}

std::string two_fer(std::string name) {
	return "One for " + name + ", one for me.";
}
}  // namespace two_fer
