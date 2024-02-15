#include <bits/stdc++.h>

using namespace std;

class Edge
{
public:
    int u, v, w;
};

const int N = 1e5;
int par[N];
int sz[N];

void dsu_init(int n)
{
    for (int i = 0; i < n; i++)
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

    n1 = find(n1);
    n2 = find(n2);

    if (sz[n1] > sz[n2])
    {
        par[n2] = n1;
        sz[n1] += sz[n2];
    }
    else
    {
        par[n1] = n2;
        sz[n2] += sz[n1];
    }
}

bool comp(Edge a, Edge b)
{
    return a.w < b.w;
}

int main()
{

    int n, e;
    cin >> n >> e;
    dsu_init(n);

    vector<Edge> el;

    for (int i = 0; i < e; i++)
    {
        Edge temp;
        cin >> temp.u >> temp.v >> temp.w;
        el.push_back(temp);
    }

    sort(el.begin(), el.end(), comp);
    int totalCost = 0;

    for (auto e : el)
    {
        int leaderA = find(e.u);
        int leaderB = find(e.v);
        if (leaderA != leaderB)
        {
            totalCost += e.w;
            merge(e.u, e.v);
        }
    }

    cout << totalCost;

    return 0;
}