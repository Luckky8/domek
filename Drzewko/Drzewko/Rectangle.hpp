#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP
#include "shape.hpp"

class Rectangle : public Shape {

public:
	using Shape::Shape;
	virtual void Fill();
	Rectangle(int h, int w, char s, string c);
	Rectangle(int h, char s, string c);
	void setXY(int x, int y);
};
#endif 