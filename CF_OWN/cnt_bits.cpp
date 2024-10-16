#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    int n;
    cin >> n;

    int cnt = 0;

    while (n > 0)
    {

        if (n & 1)
        {
            cnt++;
        }
        n = n >> 1;
    }
    cout << cnt;
    return 0;
}