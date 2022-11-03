#include "Iso_Triangle.h"
#include <iostream>

	void Iso_Triangle::print() const {
		std::cout << "\n\nIsosceles triange\n" << "Sides: a = " << a << "\tb = " << b << "\tc = " << c << std::endl;
		std::cout << "Angles: a = " << A << "\tB = " << B << "\tC = " << C;
	}