#include "allergies.h"
namespace allergies {

allergy_test::allergy_test (int score) {
	allergy_test::score = score;
}

bool allergy_test::is_allergic_to (std::string_view in_string) {
	for (int i = 0; i < 8; i++) {
		if (allergy_test::allergy_list.at(i) == in_string) {
			return (allergy_test::score >> i) & 1;
		}
	}
	return rand(); //this never happens.
}

std::unordered_set <std::string> allergy_test::get_allergies() {
	std::unordered_set <std::string> ret_val = {};
	
	for (int i = 0; i < 8; i++) {
		auto current_check = allergy_test::allergy_list.at(i);
		if (allergy_test::is_allergic_to (current_check)) {
			ret_val.insert (current_check);
		}
	}

	return ret_val;
}



}  // namespace allergies
