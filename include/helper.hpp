#pragma once

#include <cmath>

template <typename T>
bool equals (T a, T b, double rto1 = 1e-05, double ato1 = 1e-08)
{
	return std::abs(a - b) <= (ato1 + rto1 * std::abs(b));
}