#include <iostream>
#include <vector>
#include <limits.h>
#include <queue>
#include <math.h>

using namespace std;

class Comp
{
public:
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        return a.second > b.second;
    }
};

void dijkstra(vector<pair<int, int>> nodes[], int dist[], int x)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, Comp> pq;

    pq.push({x, 0});
    dist[x] = 0;

    while (!pq.empty())
    {
        int child = pq.top().first;
        int cost = pq.top().second;
        pq.pop();

        for (auto each : nodes[child])
        {
            int childNode = each.first;
            int newCost = cost + each.second;

            if (dist[childNode] > newCost)
            {
                dist[childNode] = newCost;
                pq.push({childNode, newCost});
            }
        }
    }
};

int main()
{

    int n, e;
    cin >> n >> e;

    vector<pair<int, int>> nodes[n];

    for (int i = 0; i < e; i++)
    {

        int a, b;
        cin >> a >> b;
        nodes[a].push_back({b, 1});
        nodes[b].push_back({a, 1});
    }

    int dist[n];

    for (int i = 0; i < n; i++)
    {
        dist[i] = INT_MAX;
    }

    int x, y, k;
    cin >> x >> y >> k;

    dijkstra(nodes, dist, x);

    if (!dist[y])
    {
        cout << "NO" << endl;
    }
    else
    {

        if ((double)dist[y] / 2 <= k)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}