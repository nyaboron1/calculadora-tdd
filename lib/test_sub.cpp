#define DO_TESTS

#include <iostream> 

#include "calculadora.hpp"

#if defined(DO_TESTS)

#include "Catch/include/catch.hpp"
#include "helper.hpp"

TEST_CASE ("la calculadora puede restar", "[sub]")
{
	Calculadora calc;
	
	SECTION ("puede restar enteros")
	{
		REQUIRE (calc.sub(1, 1) == 0);
		REQUIRE (calc.sub(2, 2) == 0);
		REQUIRE (calc.sub(1, -1) == 2);
	}
	
	SECTION("puede restar decimales")
	{
		REQUIRE (equals (calc.sub(1.1f, 1.2f), -0.1f));
		REQUIRE (equals (calc.sub(1.1, 1.2), -0.1));
	}

	SECTION("puede restar enteros con decimales")
	{
		// indicamos que ambos son float
		REQUIRE (equals (calc.sub<float>(1, 1.2f), -0.2f));
		// indicamos ambos <int>, perdida de decimales
		REQUIRE (equals (calc.sub<int>(1, 1.2f), 0));
	}
}

#endif