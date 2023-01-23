#include <iostream>
using namespace std;

struct My_list
{
    int n;
    My_list *next;
};

void construct(My_list *list, int count, int len)
{
    if (count == len - 1)
    {
        list->n = count;
        list->next = nullptr;
        return;
    }

    list->n = count;
    list->next = new My_list;
    
    construct(list->next, count + 1, len);

    return;
}

void print(My_list *list)
{
    My_list *curr = list;
    My_list *next = list->next;

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
    construct(&list, 0, 5);
    print(&list);
}
