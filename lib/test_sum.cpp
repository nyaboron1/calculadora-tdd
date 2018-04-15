#define DO_TESTS

#include <iostream> 

#include "calculadora.hpp"

#if defined(DO_TESTS)

#include "Catch/include/catch.hpp"
#include "helper.hpp"

TEST_CASE ("la calculadora puede sumar", "[sum]")
{
	Calculadora calc;
	
	SECTION ("puede sumar enteros")
	{
		REQUIRE (calc.sum(1, 1) == 2);
		REQUIRE (calc.sum(2, 2) == 4);
		REQUIRE (calc.sum(1, -1) == 0);
	}
	
	SECTION("puede sumar decimales")
	{
		REQUIRE (equals (calc.sum(1.1f, 1.2f), 2.3f));
		REQUIRE (equals (calc.sum(1.1, 1.2), 2.3));
	}

	SECTION("puede sumar enteros con decimales")
	{
		REQUIRE (equals (calc.sum<float>(1, 1.2f), 2.2f));
		REQUIRE (equals (calc.sum<int>(1, 1.2f), 2));
	}
}

#endif