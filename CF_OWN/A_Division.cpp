#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        cout << "Division ";

        if (n <= 1399)
        {
            cout << 4;
        }
        else if (n <= 1599)
        {
            cout << 3;
        }
        else if (n <= 1899)
        {
            cout << 2;
        }
        else
        {
            cout << 1;
        }
        cout << endl;
    }
    return 0;
}