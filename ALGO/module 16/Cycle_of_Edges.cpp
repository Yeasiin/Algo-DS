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

    int leaderA = find(n1);
    int leaderB = find(n2);

    if (sz[leaderA] > sz[leaderB])
    {
        par[leaderB] = leaderA;
        sz[leaderA] += sz[leaderB];
    }
    else
    {
        par[leaderA] = leaderB;
        sz[leaderB] += sz[leaderA];
    }
}

void dsu_init(int n)
{
    for (int i = 0; i <= n; i++)
    {
        par[i] = -1;
        sz[i] = 1;
    }
}

int main()
{

    int n, e;
    cin >> n >> e;

    dsu_init(n);
    int cycleCount = 0;

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;

        int leadA = find(a);
        int leadB = find(b);

        if (leadA != leadB)
        {
            merge(a, b);
        }
        else
        {
            cycleCount++;
        }
    }

    cout << cycleCount;

    return 0;
}