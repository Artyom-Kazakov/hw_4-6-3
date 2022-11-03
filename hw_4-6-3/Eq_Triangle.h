#pragma once
#include "Triangle.h"

class Eq_Triangle : public Triangle {
public:

	Eq_Triangle(int a) : Triangle(a, a, a, 60, 60, 60) {}

	void print() const override;
};