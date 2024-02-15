#include <iostream>
#include <vector>
#include <cstring>
#include <limits.h>
#include <queue>

using namespace std;

void dijkstra(pair<int, int> src, int dist[], vector<pair<int, int>> *nodes)
{
    queue<pair<int, int>> q;
    q.push(src);
    dist[src.first] = src.second;

    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();

        int node = par.first;
        int cost = par.second;

        for (auto child : nodes[node])
        {
            int childNode = child.first;
            int childCost = child.second;

            int newCost = cost + childCost;
            if (dist[childNode] > newCost)
            {
                dist[childNode] = newCost;
                q.push({childNode, newCost});
            };
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    vector<pair<int, int>> nodes[n];

    for (int i = 0; i < e; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;

        nodes[a].push_back({b, c});
        nodes[b].push_back({a, c});
    }

    int dist[n];

    for (int i = 0; i < n; i++)
    {
        dist[i] = INT_MAX;
    }

    dijkstra({0, 0}, dist, nodes);

    for (int i = 0; i < n; i++)
    {
        cout << i << "=>" << dist[i] << endl;
    }

    return 0;
}