#pragma once
#include "Parallelogram.h"

class Rhombus : public Parallelogram {
public:

	Rhombus(int a, int A, int B) : Parallelogram(a, a, A, B) {}

	void print() const override;
};