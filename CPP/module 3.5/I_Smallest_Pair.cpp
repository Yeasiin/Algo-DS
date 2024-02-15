#include <iostream>
#include <stdio.h>
#include <limits.h>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int test = 0; test < t; test++)
    {

        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int sum = 0, min = INT_MAX;

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                sum = arr[i] + arr[j] + (j + 1) - (i + 1);

                if (min > sum)
                {
                    min = sum;
                }
            }
        }

        cout << min << endl;
    }

    return 0;
}