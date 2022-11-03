#include "Parallelogram.h"
#include <iostream>

	void Parallelogram::print() const {
		std::cout << "\n\nParallelogram\n" << "Sides: a = " << a << "\tb = " << b << "\tc = " << c << "\td = " << d << std::endl;
		std::cout << "Angles: a = " << A << "\tB = " << B << "\tC = " << C << "\tD = " << D;
	}