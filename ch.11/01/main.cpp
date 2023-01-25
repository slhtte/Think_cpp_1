struct bird
{
	int b;
};

struct rock
{
	double b;
};

int main()
{
	struct bird *b;
	struct rock *r;
	void *v;

	v = r;
	b = reinterpret_cast<bird *>(v);
}