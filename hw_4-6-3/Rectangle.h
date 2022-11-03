#pragma once
#include "Quadrangle.h"

class Rectangle : public Quadrangle {
public:
	Rectangle(int a, int b) : Quadrangle(a, b, a, b, 90, 90, 90, 90) {}

	void print() const override;
};