#include <bits/stdc++.h>

using namespace std;

int knapsack(int n, int wei[], int val[], int w)
{

    if (n < 1 || w == 0)
    {
        return 0;
    }

    if (wei[n] <= w)
    {
        int op1 = knapsack(n - 1, wei, val, w - wei[n]) + val[n];
        int op2 = knapsack(n - 1, wei, val, w);

        return max(op1, op2);
    }
    else
    {

        return knapsack(n - 1, wei, val, w);
    }
}

int main()
{
    int n;
    cin >> n;

    int w;
    cin >> w;

    int wei[n + 1];
    int val[n + 1];

    for (int i = 1; i <= n; i++)
    {
        cin >> wei[i];
        cin >> val[i];
    }

    cout << knapsack(n, wei, val, w);

    return 0;
}