#include <bits/stdc++.h>

using namespace std;

const int N = 1e5;

int par[N];
int sz[N];

int find(int n)
{
    if (par[n] == -1)
    {
        return n;
    }
    int leader = find(par[n]);
    par[n] = leader;
    return leader;
}

void merge(int n1, int n2)
{

    int leadA = find(n1);
    int leadB = find(n2);

    if (sz[leadA] > sz[leadB])
    {
        par[leadB] = leadA;
        sz[leadA] += sz[leadB];
    }
    else
    {
        par[leadA] = leadB;
        sz[leadB] += sz[leadA];
    }
}

int main()
{

    int n, m;
    cin >> n >> m;

    memset(par, -1, sizeof(par));
    memset(sz, 1, sizeof(sz));

    for (int i = 1; i <= m; i++)
    {

        int a, b;
        cin >> a >> b;
        int leadA = find(a);
        int leadB = find(b);
        if (leadA != leadB)
        {
            merge(a, b);
        }
    }

    int flag = true;

    for (int i = 1; i <= n; i++)
    {
        int findA = find(1);
        int findB = find(i);

        if (findA != findB)
        {
            flag = false;
        }
    }

    if (flag)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}