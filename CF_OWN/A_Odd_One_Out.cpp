#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a == b)
        {
            cout << c;
        }
        else if (a == c)
        {
            cout << b;
        }
        else
        {
            cout << a;
        }
        cout << endl;
    }
    return 0;
}