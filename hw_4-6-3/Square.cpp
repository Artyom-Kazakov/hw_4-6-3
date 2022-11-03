#include "Square.h"
#include <iostream>

	void Square::print() const {
		std::cout << "\n\nSquare\n" << "Sides: a = " << a << "\tb = " << b << "\tc = " << c << "\td = " << d << std::endl;
		std::cout << "Angles: a = " << A << "\tB = " << B << "\tC = " << C << "\tD = " << D;
	}