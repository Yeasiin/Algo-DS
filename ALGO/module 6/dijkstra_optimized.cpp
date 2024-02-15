#include <iostream>
#include <vector>
#include <limits.h>
#include <queue>

using namespace std;

class Comp
{
public:
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        return a.second > b.second;
    }
};

void dijkstra(vector<pair<int, int>> nodes[], int dist[], pair<int, int> src)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, Comp> pq;
    pq.push(src);

    dist[src.first] = src.second;

    while (!pq.empty())
    {

        int node = pq.top().first;
        int cost = pq.top().second;
        pq.pop();

        for (auto child : nodes[node])
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

    dijkstra(nodes, dist, {0, 0});

    for (int i = 0; i < n; i++)
    {
        cout << i << "=> " << dist[i] << endl;
    }

    return 0;
}