#include <iostream>

using namespace std;
const int N = 1e5;

int par[N];
int sz[N];
int level[N];

void dsu_init(int node)
{
    for (int i = 0; i < node; i++)
    {
        par[i] = -1;
        sz[i] = 1;
        level[i] = 0;
    }
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

void dsu_union(int nodeA, int nodeB)
{
    int leaderA = find(nodeA);
    int leaderB = find(nodeB);
    par[leaderA] = leaderB;
}

void dsu_union_by_size(int nodeA, int nodeB)
{

    int leaderA = find(nodeA);
    int leaderB = find(nodeB);

    if (sz[leaderA] > sz[leaderB])
    {
        par[leaderB] = leaderA;
        sz[leaderA] += sz[leaderB];
    }
    else
    {
        par[leaderA] = leaderB;
        sz[leaderB] = sz[leaderA];
    }
}

void dsu_union_by_level(int nodeA, int nodeB)
{

    int leaderA = find(nodeA);
    int leaderB = find(nodeB);

    if (level[leaderA] > level[leaderB])
    {
        par[leaderB] = leaderA;
    }
    else if (level[leaderA] < level[leaderB])
    {
        par[leaderA] = leaderB;
    }
    else
    {
        par[leaderA] = leaderB;
        level[leaderB]++;
    }
}

int main()
{
    dsu_init(7);

    dsu_union_by_level(1, 2);
    dsu_union_by_level(2, 3);

    dsu_union_by_level(4, 5);
    dsu_union_by_level(5, 6);

    dsu_union_by_level(1, 4);

    // dsu_union_by_size(1, 2);
    // dsu_union_by_size(2, 3);

    // dsu_union_by_size(4, 5);
    // dsu_union_by_size(5, 6);

    // dsu_union_by_size(1, 4);

    cout << find(1) << endl;
    cout << find(4) << endl;

    return 0;
}