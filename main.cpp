#define DO_TESTS

#include <iostream>

#include "calculadora.hpp"

#if defined(DO_TESTS)

#define CATCH_CONFIG_MAIN
#include "Catch/include/catch.hpp"

template <typename T>
bool equals( T a, T b, double rto1 = 1e-05, double ato1 = 1e-08 )
{
	return std::abs(a - b) <= (ato1 + rto1 * std::abs(b));
}

TEST_CASE("la calculadora puede sumar", "[sum]")
{
	Calculadora calc;
	
	SECTION("puede sumar enteros")
	{
		REQUIRE( calc.sum(1, 1) == 2 );
		REQUIRE( calc.sum(2, 2) == 4 );
		REQUIRE( calc.sum(1, -1) == 0 );
	}
	
	SECTION("puede sumar decimales")
	{
		REQUIRE( equals( calc.sum( 1.1f, 1.2f), 2.3f) );
		REQUIRE( equals( calc.sum( 1.1, 1.2), 2.3) );
	}
}


#else

int main ( int argn, char** argv )
{
	Calculadora calc;

	std::cout << calc.sum(2,2) << std::endl;


	return 0;
}

#endif
