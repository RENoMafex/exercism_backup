#include "hexadecimal.h"

namespace hexadecimal {
int convert (std::string_view input) {
	int output = 0;
	for (int i : input) {
		if ((i < '0' || i > '9') && (i < 'a' || i > 'f')) {return 0;} // Exit if not in range 0-f
		if (i >= '0' && i <= '9') {
			i -= '0';
		} else {
			if (i == 'a') {
				i = 10;
			}
			if (i == 'b') {
				i = 11;
			}
			if (i == 'c') {
				i = 12;
			}
			if (i == 'd') {
				i = 13;
			}
			if (i == 'e') {
				i = 14;
			}
			if (i == 'f') {
				i = 15;
			}
		}
		output = output * 16 + i;
	}
	return output;
}

}  // namespace hexadecimal
