class X
{
	X(const X &other);
public:
	X(){}

	X* clone() const;
};

X* X::clone() const
{
	return new X;
}

void func(const X &x)
{
	X *x2 = x.clone();
	delete x2;
}

int main()
{
	X x;
	func(x);
}
