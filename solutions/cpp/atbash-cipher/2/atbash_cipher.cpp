#include "atbash_cipher.h"

namespace atbash_cipher {
	char swapChars (char input) {
		input = tolower(input);
		if (input >= 'a' && input <= 'z') {
			return 'z' - (input - 'a');
		} else {
			return input;
		}
	}
	std::string encode (std::string input) {
		std::string output;
		int inputLength = input.length();
		int spaces = 0;
		for (int i = 0; i < inputLength; i++){
			char currentChar = swapChars(input.at(i));
			if ((currentChar >= 'a' && currentChar <= 'z') || (currentChar >= '0' && currentChar <= '9')) {
				if ((output.length() - spaces) % 5 == 0 && i != 0) {
					output += ' ';
					spaces++;
				}
				output += currentChar;
			}
		}
		return output;
	} //string encode
	std::string decode (std::string input) {
		std::string output;
		int inputLength = input.length();
		for (int i = 0; i < inputLength; i++) {
			char currentChar = swapChars (input.at(i));
			if (currentChar != ' ') {
				output += currentChar;
			}
		}
		return output;
	} //string decode
}  // namespace atbash_cipher
