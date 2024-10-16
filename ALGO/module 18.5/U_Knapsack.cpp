#include <bits/stdc++.h>

using namespace std;

int knapsack(int n, int weight[], int value[], int w)
{

    if (w == 0 || n == 0)
    {
        return 0;
    }

    if (w >= weight[n])
    {
        int op1 = knapsack(n - 1, weight, value, w - weight[n]) + value[n];

        int op2 = knapsack(n - 1, weight, value, w);

        return max(op1, op2);
    }
    else
    {

        int op = knapsack(n - 1, weight, value, w);
        return op;
    }
}

int main()
{

    int n, w;
    cin >> n >> w;

    int weight[n + 1];
    int value[n + 1];

    for (int i = 1; i <= n; i++)
    {
        int a, b;
        cin >> a >> b;
        weight[i] = a;
        value[i] = b;
    }

    int result = knapsack(n, weight, value, w);

    cout << result;

    return 0;
}