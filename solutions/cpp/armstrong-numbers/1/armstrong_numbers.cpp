#include "armstrong_numbers.h"

namespace armstrong_numbers {

uint count_digits(uint number) {
	uint count = 0;
	while (number > 0) {
		count++;
		number /= 10;
	}
	return count;
}

uint power(uint base, uint exponent) {
	uint result = 1;
	while (exponent) {
		if (exponent % 2) {
			result *= base;
		}
		exponent /= 2;
		base *= base;
	}
	return result;
}

bool is_armstrong_number(const int number) {
	if(number < 0) return false; //negatives can not be an armstrong num
	if(number < 10) return true; //single digits are by principle an armstrong num
	//if(number < 100) return false; //commented out line, because it feels like cheating.

	uint result = 0;
	const uint num_digits = count_digits (number);
	for(uint i = 1; i <= num_digits; i++) {
		const uint digit = (number / power(10,i - 1)) % 10;
		result += power(digit, num_digits);
	}

	return result == static_cast<uint>(number);
}


} // namespace armstrong_numbers
