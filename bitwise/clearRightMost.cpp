#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    int n;
    cin >> n;

    n = n & n - 1;

    cout << n;

    return 0;
}