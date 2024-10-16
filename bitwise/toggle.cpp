#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    int n, b;
    cin >> n >> b;

    n = n ^ (1 << b - 1);

    cout << n;

    return 0;
}