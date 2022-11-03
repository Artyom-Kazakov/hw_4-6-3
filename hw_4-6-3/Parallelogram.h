#pragma once
#include "Quadrangle.h"

class Parallelogram : public Quadrangle {
public:

	Parallelogram(int a, int b, int A, int B) : Quadrangle(a, b, a, b, A, B, A, B) {}

	void print() const override;
};