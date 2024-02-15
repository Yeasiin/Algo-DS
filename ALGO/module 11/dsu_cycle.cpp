#include <iostream>

using namespace std;

const int N = 1e5;

int sz[N];
int parent[N];

void init_dsu(int n)
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

int main()
{
    int n, m;
    cin >> n >> m;

    init_dsu(n);

    bool haveCycle = false;

    for (int i = 0; i < m; i++)
    {
        int a, b;

        cin >> a >> b;

        int leaderA = find(a);
        int leaderB = find(b);

        if (leaderA == leaderB)
        {
            haveCycle = true;
        }
        else
        {
            union_by_level(a, b);
        }
    }

    return 0;
}