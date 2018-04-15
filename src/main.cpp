#define DO_TESTS

#include <iostream> 

#include "calculadora.hpp"

#if defined(DO_TESTS)

#define CATCH_CONFIG_MAIN
#include "Catch/include/catch.hpp"


#else
int main (int argn, char** argv)
{
	return 0;
}

#endif