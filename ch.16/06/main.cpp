#include <iostream>
#include <vector>
#include <set>
using namespace std;

template <typename T>
class Set
{
	vector<T> v;
	T* find(T t)
	{
		for (int i = 0; i < v.size(); ++i)
		{
			if (v[i] == t)
			{
				cout << "object " << t << " was pushed before...\n";
				return &v[i];
			}
		}

		return nullptr;
	}
public:
	void push(T t)
	{
		if (!find(t))
		{
			v.push_back(t);
		}
	}

	void remove(T t)
	{
		T *res = find(t);
		if (res)
		{
			*res = 0;
		}
		else
		{
			cout << t << " not in Set\n";
		}
	}

	class iterator;
	friend class iterator;
	class iterator
	{
		Set &set;
		int index;
	public:
		iterator(Set &s) : set(s), index(0) {}
		iterator(Set &s, bool) : set(s), index(set.v.size()) {}
		iterator& operator++()
		{
			if (++index < set.v.size())
			{
				return *this;
			}
		}

		bool operator==(const iterator &r) { return index == r.index; }
		bool operator!=(const iterator &r) { return index != r.index; }
		T operator*() const
		{
			return set.v[index];
		}
	};

	iterator begin() { return iterator(*this); }
	iterator end()   { return iterator(*this, true); }
};

int main()
{
	set<int> set;

	for (int i = 0; i < 5; ++i)
	{
		set.insert(i);
	}

	set.insert(4);
	set.erase(5);

	for (std::set<int>::iterator it = set.begin(); it != set.end(); ++it)
	{
		cout << *it << endl;
	}
}