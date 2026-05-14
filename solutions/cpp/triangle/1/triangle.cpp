#include "triangle.h"

namespace triangle {

flavor kind(float a, float b, float c){
	//throw exception if it isn't a triangle.
	if (a <= 0 || b <= 0 || c <= 0)				throw std::domain_error("");
	if (a + b < c || b + c < a || a + c < b)	throw std::domain_error("");


	//determine style of triangle
	if (a == b && a == c)			return flavor::equilateral;
	if (a == b || a == c || b == c) return flavor::isosceles;
	/*else*/						return flavor::scalene;
}

}  // namespace triangle
