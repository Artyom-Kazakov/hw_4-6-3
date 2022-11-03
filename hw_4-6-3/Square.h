#pragma once
#include "Rectangle.h"

class Square : public Rectangle {
public:

	Square(int a) : Rectangle(a, a) {};

	void print() const override;
};