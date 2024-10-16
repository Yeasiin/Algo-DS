#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int f = arr[0];
        int l = arr[n - 1];
        int cnt1 = 0;
        int cnt2 = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == f)
            {
                cnt1++;
            }
            else
            {
                break;
            }
        }

        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] == l)
            {
                cnt2++;
            }
            else
            {
                break;
            }
        }
        if (n == cnt1)
        {
            cout << 0;
        }
        else if (f == l)
        {
            cout << n - (cnt1 + cnt2);
        }
        else
        {

            cout << n - max(cnt1, cnt2);
        }

        cout << endl;
    }
    return 0;
}