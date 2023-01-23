class Base
{};

class Derived1 : public Base
{};

class Derived2 : public Base
{};

int main()
{
	Base *b1 = new Derived1;
	Base *b2 = new Derived2;
}