#include <bits/stdc++.h>

using namespace std;

const int N = 1e5;

int par[N];
int sz[N];

void dsu_init(int n)
{
    for (int i = 1; i <= n; i++)
    {
        par[i] = -1;
        sz[i] = 1;
    }
}

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

int main()
{

    int n;
    cin >> n;
    dsu_init(n);

    vector<pair<int, int>> toExt;

    for (int i = 1; i < n; i++)
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
            toExt.push_back({a, b});
        }
    }

    cout << toExt.size() << endl;

    vector<pair<int, int>> toBuild;

    for (int i = 2; i <= n; i++)
    {

        int leadA = find(1);
        int leadB = find(i);

        if (leadA != leadB)
        {
            toBuild.push_back({1, i});
            merge(1, i);
        }
    }

    for (int i = 0; i < toExt.size(); i++)
    {
        cout << toExt[i].first << " " << toExt[i].second << " " << toBuild[i].first << " " << toBuild[i].second << endl;
    }

    return 0;
}