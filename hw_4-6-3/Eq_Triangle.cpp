#include "Eq_Triangle.h"
#include <iostream>

	void Eq_Triangle::print() const {
		std::cout << "\n\nEquilateral triange\n" << "Sides: a = " << a << "\tb = " << b << "\tc = " << c << std::endl;
		std::cout << "Angles: a = " << A << "\tB = " << B << "\tC = " << C;
	}