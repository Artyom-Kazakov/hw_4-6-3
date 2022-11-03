#include "Rectangle.h"
#include <iostream>

	void Rectangle::print() const {
		std::cout << "\n\nRectangle\n" << "Sides: a = " << a << "\tb = " << b << "\tc = " << c << "\td = " << d << std::endl;
		std::cout << "Angles: a = " << A << "\tB = " << B << "\tC = " << C << "\tD = " << D;
	}