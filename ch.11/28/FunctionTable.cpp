//: C03:FunctionTable.cpp
// Èñïîëüçîâàíèå ìàññèâà óêàçàòåëåé íà ôóíêöèè
#include <iostream>
#include <vector>
using namespace std;

// Ìàêðîñ äëÿ îïðåäåëåíèÿ ôèêòèâíûõ ôóíêöèé:
#define DF(N) void N() { \
cout << "function " #N " called..." << endl; }

DF(a); DF(b); DF(c); DF(d); DF(e); DF(f); DF(g);

void (*func_table[])() = { a, b, c, d, e, f, g };

class Function_table
{
	vector<void (*)()> table;
public:
	void add(void (*ptr_func)()) { table.push_back(ptr_func); }
	void remove(void (*ptr_func)());
	void run();
};

void Function_table::remove(void (*ptr_func)())
{
	for (vector<void (*)()>::iterator it = table.begin(); it != table.end(); ++it)
	{
		if (*it == ptr_func)
		{
			table.erase(it);
			return;
		}
	}
}

void Function_table::run()
{
	for (auto func : table)
	{
		(*func)();
	}
}

int main() 
{
	Function_table table;

	for (auto i = 0; i < (sizeof(func_table) / sizeof(*func_table)); ++i)
	{
		table.add(func_table[i]);
	}

	table.run();
	cout <<"================================\n";
	table.remove(f);
	table.run();
} ///:~