int main()
{
	//int &ref1;

	int x;
	int &ref2 = x;
	int y;
	ref2 = y;

	int *n = nullptr;
	int &ref3 = *n;
}