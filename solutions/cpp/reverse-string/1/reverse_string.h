#if !defined(REVERSE_STRING_H)
#define REVERSE_STRING_H

#include <string>

namespace reverse_string {

std::string reverse_string(std::string sInput) {return std::string(sInput.rbegin(), sInput.rend());}

}  // namespace reverse_string

#endif // REVERSE_STRING_H