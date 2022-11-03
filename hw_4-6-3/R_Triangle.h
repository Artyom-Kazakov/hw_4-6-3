#pragma once
#include "Triangle.h"

class R_Triangle : public Triangle {
public:

	R_Triangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, 90) {}

	void print() const override;
};