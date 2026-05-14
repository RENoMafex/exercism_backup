#include "difference_of_squares.h"

namespace difference_of_squares {
	int sum_of_squares (int input) {
		int output = 0;
		for (int i = input; i >= 0; i--) {
			output += i * i;
		}
		return output;
	}

	int square_of_sum (int input) {
		int output = 0;
		for (int i = input; i >= 0; i--) {
			output += i;
		}
		return output * output;
	}

	int difference (int input) {
		if (difference_of_squares::square_of_sum (input) > difference_of_squares::sum_of_squares (input)) {
			return difference_of_squares::square_of_sum (input) - difference_of_squares::sum_of_squares (input);
		} else if (difference_of_squares::square_of_sum (input) < difference_of_squares::sum_of_squares (input)) {
			return difference_of_squares::sum_of_squares (input) - difference_of_squares::square_of_sum (input);
		} else {
			return 0;
		}
	}
}  // namespace difference_of_squares