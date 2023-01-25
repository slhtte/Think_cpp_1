#include <iostream>
#include <vector>
using namespace std;

class Object
{
public:
	virtual ~Object() {}
};

class Shape
{
public:
	virtual ~Shape() {}
};

class Circle : public Shape {};
class Square : public Shape {};
class Triangle : public Shape {};

class OShape : public Object, public Shape {};

class OCirle : public OShape, public Circle {};
class OSquare : public OShape, public Square {};
class OTriangle : public OShape, public Triangle {};

int main()
{
	vector<Object *> v;
	v.push_back(new OTriangle);
	v.push_back(new OSquare);
	v.push_back(new OSquare);
}