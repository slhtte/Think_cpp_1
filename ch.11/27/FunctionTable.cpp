//: C03:FunctionTable.cpp
// Èñïîëüçîâàíèå ìàññèâà óêàçàòåëåé íà ôóíêöèè
#include <iostream>
#include <vector>
using namespace std;

// Ìàêðîñ äëÿ îïðåäåëåíèÿ ôèêòèâíûõ ôóíêöèé:
#define DF(N) void N() { \
cout << "function " #N " called..." << endl; }

class Function_table
{
	DF(a); DF(b); DF(c); DF(d); DF(e); DF(f); DF(g);
	vector<void (Function_table::*)()> table;
public:
	Function_table();
	void add(void (Function_table::*ptr_func)()) { table.push_back(ptr_func); }
	void remove(int index);
	void run();
};

Function_table::Function_table()
{
	table.push_back(&Function_table::a);
	table.push_back(&Function_table::b);
	table.push_back(&Function_table::c);
	table.push_back(&Function_table::d);
	table.push_back(&Function_table::e);
	table.push_back(&Function_table::f);
	table.push_back(&Function_table::g);
}

void Function_table::remove(int index)
{
	if (index < 0 || index > table.size())
	{
		return;
	}

	auto it = table.begin() + index;
	table.erase(it);
}

void Function_table::run()
{
	for (auto func : table)
	{
		(this->*func)();
	}
}

int main() 
{
	Function_table table;

	table.run();
	cout <<"================================\n";
	table.remove(3);
	table.run();
} ///:~