#include <bits/stdc++.h>

using namespace std;

int knapsack(int n, int wei[], int val[], int w)
{

    if (n < 0)
    {
        return 0;
    }

    if (wei[n] <= w)
    {
        // niye + nah niye
        int op1 = knapsack(n - 1, wei, val, w - wei[n]) + val[n];

        int op2 = knapsack(n - 1, wei, val, w);

        return max(op1, op2);
    }
    else
    {
        // nah niye
        return knapsack(n - 1, wei, val, w);
    }
}

int main()
{
    int n, w;

    cin >> n;

    int wei[n];
    int val[n];

    for (int i = 0; i < n; i++)
    {
        cin >> wei[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
    }
    cin >> w;

    cout << knapsack(n - 1, wei, val, w);

    return 0;
}