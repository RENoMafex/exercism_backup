#if !defined(BOB_H)
#define BOB_H

#include <string>
#include <locale>

namespace bob {
//Function to check, if given string is a question.
bool is_question (std::string_view string);
bool is_silence (std::string_view string);
bool is_yell (std::string_view string);
std::string hey (std::string_view input);

}  // namespace bob

#endif  // BOB_H