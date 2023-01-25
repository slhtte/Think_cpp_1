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

// Ïåğåãğóçêà eat():
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
// Îøèáêà: Apple -> Orange èëè Apple -> Pear ???
} ///:~