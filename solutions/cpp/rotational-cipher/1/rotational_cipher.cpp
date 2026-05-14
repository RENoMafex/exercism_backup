#include "rotational_cipher.h"
namespace rotational_cipher {
	std::string rotate (std::string input, int rot) {
		std::string output;
		int length = input.length();
		for (int i = 0; i < length; i++) {
			char j = input.at(i);
			if (j >= 'a' && j <= 'z') {
				//lowercase
				for (int k = 0; k < rot; k++) {
					if (j == 'z') {
						j = 'a' - 1;
					}
					j++;
				}
			} else if (j >= 'A' && j <= 'Z') {
				//uppercase
				for (int k = 0; k < rot; k++) {
					if (j == 'Z') {
						j = 'A' - 1;
					}
					j++;
				}
			}
			output += j;
		}
		return output;
	}
}  // namespace rotational_cipher
