#include <iostream>
#include <list>

using namespace std;

void print_list(list<int> list)
{
    cout << "L -> ";

    for (int it : list)
    {
        cout << it << " ";
    }

    list.reverse();
    cout << endl;
    cout << "R -> ";

    for (int it : list)
    {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    list<int> myList;

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            myList.push_front(v);
            print_list(myList);
        }
        else if (x == 1)
        {
            myList.push_back(v);
            print_list(myList);
        }
        else if (x == 2)
        {
            if (v < myList.size())
            {
                myList.erase(next(myList.begin(), v));
            }

            print_list(myList);
        }
    }

    return 0;
}