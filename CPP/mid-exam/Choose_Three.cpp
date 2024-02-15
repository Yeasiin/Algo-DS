#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Write your code here

    int t;
    cin >> t;

    for (int test = 0; test < t; test++)
    {
        int n, s;

        cin >> n >> s;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int isPossible = 0;

        for (int i = 0; i < n - 2; i++)
        {
            for (int j = i + 1; j < n - 1; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    int total = arr[i] + arr[j] + arr[k];

                    if (total == s)
                    {

                        isPossible = 1;
                        break;
                    }
                }
            }
        }

        if (isPossible)
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
