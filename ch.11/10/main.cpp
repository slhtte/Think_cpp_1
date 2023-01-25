int my_func(int i)
{
	++i;

	return i;
}

int main()
{
	int i = 1;
	int k = my_func(i);
}