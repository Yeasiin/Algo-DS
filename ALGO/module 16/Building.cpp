#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;

int par[N];
long long sz[N];

class Edge
{
public:
    int u;
    int v;
    long long w;
};

bool comp(Edge a, Edge b)
{
    return a.w < b.w;
}

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

    int a = find(n1);
    int b = find(n2);

    if (sz[a] > sz[b])
    {
        par[b] = a;
        sz[a] += sz[b];
    }
    else
    {
        par[a] = b;
        sz[b] += sz[a];
    }
}

vector<Edge> el;

int main()
{
    int n, e;
    cin >> n >> e;

    dsu_init(n);

    for (int i = 0; i < e; i++)
    {
        Edge temp;
        int a, b, c;
        cin >> temp.u >> temp.v >> temp.w;
        el.push_back(temp);
    }

    sort(el.begin(), el.end(), comp);

    long long cost = 0;

    int flag = true;
    for (auto each : el)
    {
        int leaderA = find(each.u);
        int leaderB = find(each.v);

        if (leaderA != leaderB)
        {
            merge(each.u, each.v);
            cost += each.w;
        }
    }

    for (int i = 1; i <= n; i++)
    {

        int a = find(1);
        int b = find(i);

        if (a != b)
        {
            flag = false;
        }
    }

    if (!flag)
    {
        cout << -1;
    }
    else
    {
        cout << cost;
    }

    return 0;
}