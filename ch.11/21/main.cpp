class My_class
{
	My_class(const My_class &other);
public:
	My_class() {}
};

void func(My_class arg){}

int main()
{
	My_class obj1;
	func(obj1);
}