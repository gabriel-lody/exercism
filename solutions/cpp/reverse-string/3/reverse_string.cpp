#include "reverse_string.h"

namespace reverse_string {

std::string reverse_string(const std::string& sInput) {return std::string(sInput.rbegin(), sInput.rend());}

}  // namespace reverse_string
