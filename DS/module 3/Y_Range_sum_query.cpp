#include <iostream>

using namespace std;

int main()
{
    int n, q;

    cin >> n >> q;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long prefixSum[n];

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            prefixSum[i] = a[i];
        }
        else
        {
            prefixSum[i] = prefixSum[i - 1] + a[i];
        }
    }

    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;

        if (l == 1)
        {
            cout << prefixSum[r - 1] << endl;
        }
        else
        {
            cout << prefixSum[r - 1] - prefixSum[l - 2] << endl;
        }
    }

    return 0;
}