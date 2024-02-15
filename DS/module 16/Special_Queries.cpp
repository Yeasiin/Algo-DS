#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main()
{

    queue<string> customer;
    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int command;
        cin >> command;

        if (command == 0)
        {
            string name;
            cin >> name;

            customer.push(name);
        }
        else if (command == 1)
        {
            if (customer.empty())
            {
                cout << "Invalid" << endl;
            }
            else
            {
                cout << customer.front() << endl;
                customer.pop();
            }
        }
    }

    return 0;
}
