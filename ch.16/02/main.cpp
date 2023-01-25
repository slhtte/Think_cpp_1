#include <iostream>
#include "TStack2.h"
using namespace std;

class Shape
{
public:
	virtual void draw() const { cout << "Shape::draw()\n"; }
	virtual ~Shape() { cout << "~Shape()\n"; }
};

class Circle : public Shape
{
public:
	void draw() const { cout << "Circle::draw()\n"; }
};

class Square : public Shape
{
public:
	void draw() const { cout << "Square::draw()\n"; }
};

class Triangle : public Shape
{
public:
	void draw() const { cout << "Triangle::draw()\n"; }
};

int main()
{
	/*
	Shape *arr[] = { new Circle, new Square, new Triangle };
	for (int i = 0; i < sizeof(arr) / sizeof(*arr); ++i)
	{
		arr[i]->draw();
	}
	*/

	Stack<Shape> stack;
	stack.push(new Circle);
	stack.push(new Square);
	stack.push(new Triangle);

	Stack<Shape>::iterator it = stack.begin();

	for (; it != stack.end(); ++it)
	{
		it.current()->draw();
	}
}