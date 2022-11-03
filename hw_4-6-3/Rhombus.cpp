#include "Rhombus.h"
#include <iostream>

	void Rhombus::print() const {
		std::cout << "\n\nRhombus\n" << "Sides: a = " << a << "\tb = " << b << "\tc = " << c << "\td = " << d << std::endl;
		std::cout << "Angles: a = " << A << "\tB = " << B << "\tC = " << C << "\tD = " << D << std::endl;;
	}