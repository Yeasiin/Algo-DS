#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    int a, b;
    cin >> a >> b;

    // ( ) is required for popper check
    if ((a ^ b) == 0)
    {
        cout << "Equal\n";
    }
    else
    {
        cout << "not equal\n";
    }

    return 0;
}