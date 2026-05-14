#include "grains.h"

namespace grains {

ull square(uint square_to_calc) {
	ull result = 1;
	square_to_calc--;
	while (square_to_calc) {
		result *= 2;
		square_to_calc--;
	}
	return result;
}

ull total(void) {
	uchar i = 64; //doesnt even need an int, a single byte is enough.
	ull result = 0;
	while (i) {
		result += square(i);
		i--;
	}
	return result;

}

}  // namespace grains
