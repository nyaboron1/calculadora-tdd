#pragma once


class Calculadora
{
public:
	Calculadora();
	
	template <typename T>
	T sum (T, T);

	template <typename T>
	T sub (T, T);

	template <typename T>
	T div (T, T);

	template <typename T>
	T mul (T, T);
};

template <typename T>
T Calculadora::sum (T a, T b)
{
	return a + b;
}

template <typename T>
T Calculadora::sub (T a, T b)
{
	return a - b;
}

template <typename T>
T Calculadora::div (T a, T b)
{
	return a / b;
}

template <typename T>
T Calculadora::mul (T a, T b)
{
	return a * b;
}