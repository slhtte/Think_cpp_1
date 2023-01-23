class S
{
	int i;
	enum { size = 5 };
	int arr[size];
public:
	S(int ii);
};

S::S(int ii) : i(i) {}

int main()
{
	S s(3);
}