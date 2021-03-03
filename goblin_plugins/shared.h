//
// Created by snizzfos on 3/2/21.
//

#ifndef DOCKER_TEST_SHARED_H
#define DOCKER_TEST_SHARED_H

#define DYNALO_EXPORT_SYMBOLS
#include <dynalo/symbol_helper.hpp>

#include <cstdint>
#include <string>

DYNALO_EXPORT int32_t DYNALO_CALL add_integers(const int32_t a, const int32_t b);
DYNALO_EXPORT void DYNALO_CALL print_message(std::string const & message);

#endif //DOCKER_TEST_SHARED_H
