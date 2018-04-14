#define DO_TESTS

#include <iostream> 

#include "calculadora.hpp"

#if defined(DO_TESTS)

#include "Catch/include/catch.hpp"
#include "helper.hpp"

TEST_CASE ("la calculadora puede multiplicar", "[mul]")
{
	Calculadora calc;
	
	SECTION ("puede multiplicar enteros")
	{
		REQUIRE (calc.mul(1, 1) == 1);
		REQUIRE (calc.mul(2, 2) == 4);
		REQUIRE (calc.mul(1, -1) == -1);
	}
	
	SECTION("puede multiplicar decimales")
	{
		REQUIRE (equals (calc.mul(1.1f, 1.2f), 1.32f));
		REQUIRE (equals (calc.mul(1.1, 1.2), 1.32));
	}

	SECTION("puede multiplicar enteros con decimales")
	{
		REQUIRE (equals (calc.mul<float>(1, 1.2f), 1.2f));
		REQUIRE (equals (calc.mul<int>(1, 1.2f), 1));
	}
}

#endif