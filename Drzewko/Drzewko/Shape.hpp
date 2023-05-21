#ifndef SHAPE_HPP
#define SHAPE_HPP
#include <iostream>
#include <string>

using namespace std;
class Shape {
protected:
	int height;
	int width;
	string color;
	char symbol;

	int** tab;

	int x, y;

public:
	void Print();

	virtual void Fill() = 0;
	void Alloc();

	Shape(int h, char s, string c);
	~Shape();
	int setXY(int x, int y);

	static int counter;

	friend class Forest;

};
#endif