#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    int a, b;
    cin >> a >> b;

    if ((a ^ b) == 0)
    {
        cout << "Equal";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}