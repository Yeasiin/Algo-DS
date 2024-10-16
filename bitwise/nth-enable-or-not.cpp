#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    int n, b;
    cin >> n >> b;

    if (n & (1 << b - 1))
    {
        cout << "on";
    }
    else
    {
        cout << "off";
    }

    return 0;
}