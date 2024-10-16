#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int len = 1e4 + 5;

        int arr[len];

        memset(arr, 0, sizeof(arr));

        int def = 0;
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;

            if (temp > n || arr[temp] > 0)
            {
                def++;
            }

            arr[temp]++;
        }

        if (k >= def)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}