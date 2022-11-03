#include <iostream>
#include <string>
#include "Figure.h"
#include "Triangle.h"
#include "R_Triangle.h"
#include "Eq_Triangle.h"
#include "Iso_Triangle.h"
#include "Quadrangle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"

int main()
{
	Figure* tri = new Triangle(10, 20, 30, 60, 40, 100);
	tri->print();

	Figure* r_t = new R_Triangle(20, 30, 40, 50, 80);
	r_t->print();

	Figure* eq_t = new Eq_Triangle(77);
	eq_t->print();

	Figure* iso_t = new Iso_Triangle(80, 40, 60, 30);
	iso_t->print();

	Figure* quad = new Quadrangle(45, 67, 23, 76, 24, 87, 23, 56);
	quad->print();

	Figure* rect = new Rectangle(40, 70);
	rect->print();

	Figure* sqr = new Square(69);
	sqr->print();

	Figure* par = new Parallelogram(20, 60, 50, 90);
	par->print();

	Figure* rho = new Rhombus(420, 80, 100);
	rho->print();

	delete tri;
	delete r_t;
	delete eq_t;
	delete iso_t;
	delete quad;
	delete rect;
	delete sqr;
	delete par;
	delete rho;
}