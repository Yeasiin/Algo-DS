#include <iostream>
#include <vector>
#include <limits.h>
#include <queue>

using namespace std;

// directed graph require dfs
void dijkstra(vector<pair<int, int>> adj[], int dist[], int src)
{
    dist[src] = 0;
    priority_queue<pair<int, int>> pq;
    pq.push({src, 0});

    while (!pq.empty())
    {
        auto top = pq.top();
        pq.pop();

        int node = top.first;
        int cost = top.second;

        for (auto child : adj[node])
        {

            int childNode = child.first;
            int childCost = child.second;

            int newCost = cost + childCost;

            if (dist[childNode] > newCost)
            {
                dist[childNode] = newCost;
                pq.push({childNode, newCost});
            }
        }
    }
}

int main()
{

    int n, s, d;
    cin >> n >> s >> d;

    n += 1;

    int node[n][n];

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            int w;
            cin >> w;
            node[i][j] = w;
        }
    }

    vector<pair<int, int>> v[n];

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (i != j)
            {
                if (node[i][j] >= 0)
                {
                    v[i].push_back({j, node[i][j]});
                }
            }
        }
    }

    int dist[n];

    for (int i = 1; i < n; i++)
    {
        dist[i] = INT_MAX;
    }

    dijkstra(v, dist, s);

    if (dist[d] == INT_MAX)
    {
        cout << -1;
    }
    else
    {
        cout << dist[d];
    }

    return 0;
}