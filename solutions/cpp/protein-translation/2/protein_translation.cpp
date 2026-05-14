#include "protein_translation.h"

namespace protein_translation {

// TODO: add your solution here

int find_length (const char* input) {
	int i = 0;
	while (input [i] != '\0') {
		i++;
	}  // while
	return i;
}  // find_length()


std::vector <std::string> proteins (const char* inPtr) {
	std::vector <std::string> output = {};
	std::string inString = inPtr;
	std::vector <std::string> input = {};
	for (int i = 0; i < (int) inString.length() / 3; i++) {
		input.push_back (inString.substr (i * 3, 3));
		if (input.at (i) == ("AUG")) {
			output.push_back ("Methionine");
		} else if (input.at (i) == "UUU" || input.at (i) == "UUC") {
			output.push_back ("Phenylalanine");
		} else if (input.at (i) == "UUA" || input.at (i) == "UUG") {
			output.push_back ("Leucine");
		} else if (input.at (i) == "UCU" || input.at (i) == "UCC" || input.at (i) == "UCA" || input.at (i) == "UCG") {
			output.push_back ("Serine");
		} else if (input.at (i) == "UAU" || input.at (i) == "UAC") {
			output.push_back ("Tyrosine");
		} else if (input.at (i) == "UGU" || input.at (i) == "UGC") {
			output.push_back ("Cysteine");
		} else if (input.at (i) == "UGG") {
			output.push_back ("Tryptophan");
		} else if (input.at (i) == "UAA" || input.at (i) == "UAG" || input.at (i) == "UGA") {
			break;
		}
	}  // for
	return output;
}  // proteins()

}  // namespace protein_translation
