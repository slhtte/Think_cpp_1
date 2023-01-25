unsigned char MY_REC_FUNC(unsigned int argument)
{
	if (argument == 0) return argument;

	MY_REC_FUNC(--argument);
}

int main()
{
	unsigned int result = MY_REC_FUNC(42);
}