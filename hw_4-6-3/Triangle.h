#pragma once
#include "Figure.h"

class Triangle : public Figure {
protected:

	int a = 0;
	int b = 0;
	int c = 0;
	int A = 0;
	int B = 0;
	int C = 0;

public:

	Triangle(int a, int b, int c, int A, int B, int C);

	void print() const override;
};