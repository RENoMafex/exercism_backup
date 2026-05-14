#if !defined(TRIANGLE_H)
#define TRIANGLE_H

#include <stdexcept>

namespace triangle {

enum class flavor{
	equilateral,	// 0
	isosceles,		// 1
	scalene			// 2
};

flavor kind(float a, float b, float c);
}  // namespace triangle

#endif  // TRIANGLE_H