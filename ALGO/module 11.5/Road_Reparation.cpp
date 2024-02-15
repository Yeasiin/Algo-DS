#include <bits/stdc++.h>

using namespace std;

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

class Edge
{
public:
    int u, v, w;
    Edge(int u, int v, long long w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

bool comp(Edge a, Edge b)
{
    return a.w < b.w;
}

int find(int node)
{
    if (par[node] == -1)
    {
        return node;
    }
    int leader = find(par[node]);
    par[node] = leader;
    return leader;
}

void merge(int node1, int node2)
{
    int leaderA = find(node1);
    int leaderB = find(node2);

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
    int n, m;
    cin >> n >> m;

    dsu_init(n);

    vector<Edge> el;

    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;

        el.push_back(Edge(a, b, c));
    }

    sort(el.begin(), el.end(), comp);

    long long cost = 0;
    int edCount = 0;

    for (auto e : el)
    {
        int leadA = find(e.u);
        int leadB = find(e.v);

        if (leadA != leadB)
        {
            merge(e.u, e.v);
            cost += e.w;
            edCount++;
        }
    }

    if (edCount == n - 1)
    {
        cout << cost;
    }
    else
    {
        cout << "IMPOSSIBLE";
    }

    return 0;
}