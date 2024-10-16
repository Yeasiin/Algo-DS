#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int k = 1; k <= n; k++)
    {

        for (int i = 1; i <= n - k; i++)
        {
            cout << " ";
        }

        for (int i = 1; i <= n - k + 1; i++)
        {
            cout << "*";
        }
        for (int i = 1; i <= 4 * (k - 1); i++)
        {
            cout << " ";
        }

        for (int i = 1; i <= n - k + 1; i++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}