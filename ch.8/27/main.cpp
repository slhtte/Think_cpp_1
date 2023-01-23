class S
{
	volatile int i;
public:
	void f();
	void vf() volatile;
};

void S::f()
{
	++i;
}

void S::vf() volatile
{
	++i;
}

int main()
{
	S s;
	volatile S vs;

	s.f();
	s.vf();

	vs.f();
	vs.vf();
}