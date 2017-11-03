
class Calculadora
{
public:
	Calculadora();
	
	template <typename T>
	T sum ( T, T );
};

template <typename T>
T Calculadora::sum ( T a, T b )
{
	return a + b;
}
