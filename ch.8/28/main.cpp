class bird
{
	int i;
public:
	void fly();
};

void bird::fly()
{
	++i;
}

class rock{};

int main()
{
	rock r;
	void *rp = &r;
	bird *bp = (bird *)rp;
	bp->fly();
}