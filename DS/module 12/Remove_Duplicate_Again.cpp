#include <iostream>
#include <list>

using namespace std;

int main()
{

    list<int> mylist;

    int x;

    while (true)
    {
        cin >> x;
        if (x == -1)
        {
            break;
        }
        mylist.push_back(x);
    }

    mylist.sort();
    mylist.unique();

    for (auto value : mylist)
    {
        cout << value << " ";
    }

    return 0;
}