#define DO_TESTS

#include <iostream> 

#include "calculadora.hpp"

#if defined(DO_TESTS)

#include "Catch/include/catch.hpp"
#include "helper.hpp"

TEST_CASE ("la calculadora puede dividir", "[div]")
{
	Calculadora calc;
	
	SECTION ("puede dividir enteros")
	{
		REQUIRE (calc.div(1, 1) == 1);
		REQUIRE (calc.div(1, 2) == 0);
		REQUIRE (calc.div(1, -1) == -1);
	}
	
	SECTION("puede dividir decimales")
	{
		REQUIRE (equals (calc.div(1.1f, 1.2f), 0.916666666667f));
		REQUIRE (equals (calc.div(1.1, 1.2), 0.91666666666666666666666667));
	}

	SECTION("puede dividir enteros con decimales")
	{
		REQUIRE (equals (calc.div<float>(1, 1.2f), 0.8333333333333f));
		REQUIRE (equals (calc.div<int>(1, 1.2f), 1));
	}
}

#endif