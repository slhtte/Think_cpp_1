#include <iostream>
using namespace std;

class Shape
{
public:
	virtual void draw() = 0;
	Shape()
	{
		draw();
	}
};

void Shape::draw() { cout << "Shape::draw()\n"; }

class Circle : public Shape
{
public:
	void draw() override { cout << "Circle::draw()\n"; }
};

class Square : public Shape
{
public:
	void draw() override { cout << "Square::draw()\n"; }
};

class Triangle : public Shape
{
public:
	void draw() override { cout << "Triangle::draw()\n"; }
};

void f(Shape &s)
{
	s.draw();
}

int main()
{
	Shape *arr[] = { new Circle, new Square, new Triangle };

	for (int i = 0; i < sizeof(arr) / sizeof(*arr); ++i)
	{
		//arr[i]->draw();
		f(*arr[i]);
	}

	cout << "===============\n";
}