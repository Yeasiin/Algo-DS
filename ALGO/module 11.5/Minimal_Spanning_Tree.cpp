#include <bits/stdc++.h>

using namespace std;

vector<int> par;
vector<int> sz;

class Edge
{
public:
    int u;
    int v;
    int w;
    Edge(int u, int v, int w)
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

void dsu_union(int n1, int n2)
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

    par.resize(n + 1, -1);
    sz.resize(n + 1, 1);

    vector<Edge> el;

    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;

        el.push_back(Edge(a, b, c));
    }

    sort(el.begin(), el.end(), comp);
    int cost = 0;

    for (auto e : el)
    {
        int leadA = find(e.u);
        int leadB = find(e.v);

        if (leadA != leadB)
        {
            dsu_union(e.u, e.v);
            cost += e.w;
        }
    }

    cout << cost;

    return 0;
}
