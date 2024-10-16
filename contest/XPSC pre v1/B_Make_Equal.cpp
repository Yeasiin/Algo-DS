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

        int total = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            total += arr[i];
        }

        int perContainer = total / n;

        int carry = 0;
        int flag = true;
        for (int i = 0; i < n; i++)
        {

            if (arr[i] > perContainer)
            {
                carry += arr[i] - perContainer;
            }
            else
            {
                int toAdd = perContainer - arr[i];

                if (carry >= toAdd)
                {
                    carry -= toAdd;
                }
                else
                {
                    flag = false;
                }
            }
        }

        if (flag && carry == 0)
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