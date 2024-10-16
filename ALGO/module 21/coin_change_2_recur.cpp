#include <bits/stdc++.h>

using namespace std;

int recur(int n, int s, int arr[])
{

    if (n == 0)
    {
        if (s == 0)
            return 0;
        return INT_MAX;
    }

    if (arr[n - 1] <= s)
    {
        int op1 = recur(n, s - arr[n - 1], arr) + 1;
        int op2 = recur(n - 1, s, arr);
        return min(op1, op2);
    }
    else
    {
        return recur(n - 1, s, arr);
    }
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int s;
    cin >> s;

    cout << recur(n, s, arr);

    return 0;
}