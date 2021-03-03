//
// Created by snizzfos on 3/2/21.
//

#include "shared.h"

#include <iostream>
#include <string_view>

DYNALO_EXPORT int32_t DYNALO_CALL add_integers(const int32_t a, const int32_t b)
{
    return a + b;
}



DYNALO_EXPORT void DYNALO_CALL print_message(std::string const &str)
{
    std::cout << "logger: [" << str << "]" << std::endl;
}