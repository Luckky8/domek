#include <iostream>

#include "forest.hpp"
#include "rectangle.hpp"
//#include "tree.hpp"
//#include "border.hpp"
#include "trapeze.hpp"
#include "tree.hpp"

int Shape::counter = 0;
int main()
{
	Forest las = Forest(20, 20);

	Rectangle base(5, 25, '#', "green"); 
	Trapeze roof(5, '^', "red");
	//Tree tree(4, 2, '*', "green");
	//tree.setXY(0, 5);
	base.setXY(0, 7);
	roof.setXY(0, 4);
	roof.Print();
	base.Print();
	

	

	//Border* b = new Border(*p, 1);

	//Tree* c = new Tree(5, '*', "red");

	//las.AddShape(p, 2, 2);
	//las.AddShape(k, 7, 20);
	//las.AddShape(b, 3, 40);

	//c->setXY(33, 4);
	//las += c;
	return 0;
}
