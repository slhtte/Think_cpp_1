//: C12:TypeConversionFanout.cpp
class Orange {};
class Pear {};

class Apple {
public:
operator Orange() const
{
	return Orange();
}
Pear make_Pear() const
{
	return Pear();
}
};

// ���������� eat():
void eat(Orange)
{

}
void eat(Pear)
{

}

int main() {
Apple c;
eat(c);
eat(c.make_Pear());
// ������: Apple -> Orange ��� Apple -> Pear ???
} ///:~