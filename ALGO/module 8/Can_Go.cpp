#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#include <limits.h>

using namespace std;
class Comp
{
public:
    bool operator()(pair<int, long long int> a, pair<int, long long int> b)
    {
        return a.second > b.second;
    }
};

void dijkstra(vector<pair<int, int>> nodes[], int dist[], int src)
{
    priority_queue<pair<int, long long int>, vector<pair<int, long long int>>, Comp> pq;

    dist[src] = 0;

    pq.push({src, 0});

    while (!pq.empty())
    {
        int node = pq.top().first;
        long long cost = pq.top().second;
        pq.pop();

        for (pair<int, long long> child : nodes[node])
        {
            int childNode = child.first;
            long long chidCost = child.second;

            long long newCost = cost + chidCost;

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

    vector<pair<int, int>> nodes[n + 1];

    for (int i = 0; i < e; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        nodes[a].push_back({b, c});
    }

    int s;
    cin >> s;

    int q;
    cin >> q;

    int dist[n + 1];

    for (int i = 1; i <= n; i++)
    {
        dist[i] = INT_MAX;
    }

    dijkstra(nodes, dist, s);

    for (int i = 0; i < q; i++)
    {
        int d, dc;
        cin >> d >> dc;

        if (dist[d] <= dc)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}