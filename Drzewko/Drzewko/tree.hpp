#pragma once
#include "rectangle.hpp"

class Tree : public Rectangle {
public:
	using Rectangle::Rectangle;
	virtual void Fill();
	Tree(int h, int w, char s, string c);
	Tree(int h, char s, string c);

};
