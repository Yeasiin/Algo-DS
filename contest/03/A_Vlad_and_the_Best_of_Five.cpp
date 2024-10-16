#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a = 0, b = 0;
        for (int i = 0; i < 5; i++)
        {
            char inp;
            cin >> inp;

            if (inp == 'A')
            {
                a++;
            }
            else
            {
                b++;
            }
        }
        if (a > b)
        {
            cout << 'A';
        }
        else
        {
            cout << 'B';
        }
        cout << endl;
    }

    return 0;
}