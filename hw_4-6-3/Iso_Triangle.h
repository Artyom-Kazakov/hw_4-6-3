#pragma once
#include "Triangle.h"
class Iso_Triangle : public Triangle {
public:

	Iso_Triangle(int a, int b, int A, int B) : Triangle(a, b, a, A, B, A) {}

	void print() const override;
};