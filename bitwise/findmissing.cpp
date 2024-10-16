#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{

    int n;
    cin >> n;

    int arr[n];
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        res = res ^ arr[i];
    }

    for (int i = 1; i <= n + 1; i++)
    {
        res = res ^ i;
    }

    cout << res << endl;

    return 0;
}