#include <bits/stdc++.h>

using namespace std;

class Edge
{
public:
    int u, v, w;
};

int main()
{
    vector<Edge> el;
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        Edge temp;
        cin >> temp.u >> temp.v >> temp.w;
        el.push_back(temp);
    }

    int dist[n + 1];
    for (int i = 1; i <= n; i++)
    {
        dist[i] = INT_MAX;
    }

    dist[1] = 0;

    for (int i = 1; i < n; i++)
    {
        for (Edge ed : el)
        {
            if (dist[ed.u] < INT_MAX && dist[ed.u] + ed.w < dist[ed.v])
            {
                dist[ed.v] = dist[ed.u] + ed.w;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (dist[i] == INT_MAX)
        {
            cout << 30000 << " ";
        }
        else
        {
            cout << dist[i] << " ";
        }
    }

    return 0;
}