class S
{
	float f;
	const float cf;
public:
	S(float ff, float cff);
};

S::S(float ff, float cff) : f(ff), cf(cff) {}

int main()
{
	S s(1.1, 2.2);
}