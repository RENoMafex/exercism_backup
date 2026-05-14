#if !defined(ALLERGIES_H)
#define ALLERGIES_H

#include <string>
#include <array>
#include <vector>
#include <unordered_set>

namespace allergies {

class allergy_test {
	public:
		allergy_test (int);
		bool is_allergic_to (std::string_view);

		std::unordered_set <std::string> get_allergies ();

		const std::array <const std::string, 8> allergy_list = {
			"eggs",			// 2 ^ 0 =   1
			"peanuts",		// 2 ^ 1 =   2
			"shellfish",	// 2 ^ 2 =   4
			"strawberries",	// 2 ^ 3 =   8
			"tomatoes",		// 2 ^ 4 =  16
			"chocolate",	// 2 ^ 5 =  32
			"pollen",		// 2 ^ 6 =  64
			"cats"			// 2 ^ 7 = 128
		};
		

	private:
		unsigned int score = 0;
};


}  // namespace allergies

#endif  // ALLERGIES_H