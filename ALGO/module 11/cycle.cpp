#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int N = 1e5;

int parent[N];
int sz[N];

void dsu_init(int n)
{
    for (int i = 0; i < n; i++)
    {
        parent[i] = -1;
        sz[i] = 1;
    }
}

int find(int node)
{
    if (parent[node] == -1)
    {
        return node;
    }
    int leader = find(parent[node]);
    parent[node] = leader;
    return leader;
}

void union_by_level(int node1, int node2)
{

    int leaderA = find(node1);
    int leaderB = find(node2);

    if (sz[leaderA] > sz[leaderB])
    {
        parent[leaderB] = leaderA;
        sz[leaderA] += sz[leaderB];
    }
    else
    {
        parent[leaderA] = leaderB;
        sz[leaderB] += sz[leaderA];
    }
}

class Edge
{
public:
    int u, v, w;
    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

bool comp(Edge a, Edge b)
{
    if (a.w > b.w)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{

    int n, m;
    cin >> n >> m;

    dsu_init(n);

    vector<Edge> nodes;

    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;

        nodes.push_back(Edge(u, v, w));
    }

    sort(nodes.begin(), nodes.end(), comp);

    int totalCost = 0;

    for (auto child : nodes)
    {
        int leaderA = find(child.u);
        int leaderB = find(child.v);

        if (leaderA != leaderB)
        {
            union_by_level(leaderA, leaderB);
            totalCost += child.w;
        }
    }

    cout << totalCost;

    return 0;
}