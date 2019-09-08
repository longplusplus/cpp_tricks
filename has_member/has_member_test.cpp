#include <string>
#include <iostream>
#include "has_member.h"

DEFINE_MEMBER_CHECKER(clear);
DEFINE_MEMBER_CHECKER(reset);
int main() {
    //static_assert(has_member_clear<std::string>::value, ""); //compile failure
    std::cerr << "has_member_clear<std::string> = " << has_member_clear<std::string>::value << "\n";
    std::cerr << "has_member_reset<std::string> = " << has_member_reset<std::string>::value << "\n";
    return 0;
};
