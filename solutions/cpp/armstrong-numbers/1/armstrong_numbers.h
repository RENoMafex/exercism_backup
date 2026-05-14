#if !defined(ARMSTRONG_NUMBERS_H)
#define ARMSTRONG_NUMBERS_H

typedef unsigned int uint;
namespace armstrong_numbers {

uint power(const uint number, uint power = 0);
uint count_digits(uint number = 0);
bool is_armstrong_number (const int number = 0);

}  // namespace armstrong_numbers

#endif  // ARMSTRONG_NUMBERS_H