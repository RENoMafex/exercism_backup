#if !defined(PANGRAM_H)
#define PANGRAM_H

#include <string>
#include <locale>

#include <iostream>

namespace pangram {

bool is_pangram(std::string_view input_view);

}  // namespace pangram

#endif  // PANGRAM_H