#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string bluePrint = "abc";

        int flt = 0;
        char ch;
        for (int i = 0; i < 3; i++)
        {
            cin >> ch;

            if (ch != bluePrint[i])
            {
                flt++;
            }
        }
        if (flt <= 2)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}