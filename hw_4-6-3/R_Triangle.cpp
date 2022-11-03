#include <iostream>
#include "R_Triangle.h"

	void R_Triangle::print() const {
		std::cout << "\n\nRight triange\n" << "Sides: a = " << a << "\tb = " << b << "\tc = " << c << std::endl;
		std::cout << "Angles: a = " << A << "\tB = " << B << "\tC = " << C;
	}