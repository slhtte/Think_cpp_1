#include <iostream>
using namespace std;

struct My_list
{
    int n;
    My_list *next;

    void construct(int count, int len);
    void print();
};

void My_list::construct(int count, int len)
{
    if (count == len - 1)
    {
        n = count;
        next = nullptr;
        return;
    }

    n = count;
    next = new My_list;
    
    next->construct(count + 1, len);

    return;
}

void My_list::print()
{
    My_list *curr = this;
    My_list *next = this->next;

    while (true)
    {
        cout << "n = " << curr->n
             << " next = " << (long)curr->next
             << endl;
        if (!curr->next)
        {
            break;
        }
        curr = next;
        next = curr->next;
    }
}

int main()
{
    My_list list;
    list.construct(0, 5);
    list.print();
}
