CXX = g++
CXXFLAGS = -std=c++11 -Wall

OBJECTS = main.o calculadora.o test_div.o test_sum.o test_mul.o test_sub.o

main: $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJECTS): calculadora.hpp