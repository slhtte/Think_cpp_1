int MY_FUNC_INT(int argument_int)
{
	++argument_int;

	return argument_int;
}

char MY_FUNC_CHAR(char argument_char)
{
	argument_char = 'Z';

	return argument_char;
}

float MY_FUNC_FLOAT(float argument_float)
{
	argument_float += 1.1;

	return argument_float;
}

double MY_FUNC_DOUBLE(double argument_double)
{
	argument_double += 22.2;

	return argument_double;
}

int main()
{
	int i = MY_FUNC_INT(42);

	char c = MY_FUNC_CHAR('A');

	float f = MY_FUNC_FLOAT(1.1);

	double d = MY_FUNC_DOUBLE(11.11);
}