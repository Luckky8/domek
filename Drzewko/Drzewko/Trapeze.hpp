
#include "Rectangle.hpp"
class Trapeze : public Rectangle
{
public:
	int margin;
	Trapeze(int h, char s, string c);
	void Cut();
	void setXY(int x, int y);
};
