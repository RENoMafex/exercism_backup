#include "darts.h"

namespace darts {

int score (float x, float y) {
	const unsigned int distance = std::ceil (std::sqrt (std::pow (x, 2) + std::pow (y, 2)));
	switch (distance) {
		case 0:
		case 1:
			return 10;
		case 2:
		case 3:
		case 4:
		case 5:
			return 5;
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
			return 1;
		default:
			return 0;
	}  // switch(distance)
}

}  // namespace darts
