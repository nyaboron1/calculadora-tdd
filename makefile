.PHONY= doc clean

CC = g++ -std=c++11
OPTIONS = -g 
DEBUG = #-D DEBUG
LIBDIR = lib
INCLUDEDIR = include
_OBJ = calculadora.o test_div.o test_sum.o test_mul.o test_sub.o
OBJ = $(patsubst %, $(LIBDIR)/%, $(_OBJ))

main:    src/main.cpp $(OBJ)
	$(CC) $(OPTIONS) $(DEBUG) -I$(INCLUDEDIR) src/main.cpp $(OBJ) -o main
	./main

$(LIBDIR)/%.o : $(LIBDIR)/%.cpp $(INCLUDEDIR)/%.hpp
	$(CC) $(OPTIONS) $(DEBUG) -c -I$(INCLUDEDIR) -o $@ $<


clean:
	rm -f $(OBJ)