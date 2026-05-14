#include "eliuds_eggs.h"

namespace chicken_coop {

unsigned int positions_to_quantity(unsigned int num_display) {
	std::vector<bool> bits = {};
	while (num_display) {
		//the bits will be in 'wrong' order, which doesn't matter,
		//because only the number of high bits need to be counted
		//if the bits would be needed in right order, i would go with:
		// bits.insert(bits.begin(), num_display % 2);
		bits.emplace_back(num_display % 2);
		num_display /= 2;
	}
	unsigned int result = 0;
	for (const auto bit : bits) {
		if (bit == true) result++;
	}

	return result;
}
}  // namespace chicken_coop
