#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    if (n == 1)
    {
        cout << 1;
        return 0;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << i;
    }
    cout << endl;

    for (int i = 2; i <= n - 1; i++)
    {
        cout << i;
        for (int j = 1; j <= n - 1; j++)
        {
            if (j == n - 1)
            {
                cout << n;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << n;
    }

    return 0;
}