#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#include <limits.h>

using namespace std;

class Edge
{
public:
    long long int u, v, c;
    Edge(long long int u, long long int v, long long int c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};

int main()
{
    long long int n, e;
    cin >> n >> e;

    vector<Edge> nodes;

    for (long long int i = 0; i < e; i++)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        nodes.push_back(Edge(a, b, c));
    }

    long long int dist[n + 1];

    for (long long int i = 1; i <= n; i++)
    {
        dist[i] = 1e18;
    }
    long long int q, s;
    cin >> s >> q;

    dist[s] = 0;

    for (long long i = 1; i < n; i++)
    {
        for (auto ed : nodes)
        {
            if (dist[ed.u] < 1e18 && dist[ed.u] + ed.c < dist[ed.v])
            {
                dist[ed.v] = dist[ed.u] + ed.c;
            }
        }
    }

    bool haveCycle = false;

    for (auto ed : nodes)
    {
        if (dist[ed.u] < 1e18 && dist[ed.u] + ed.c < dist[ed.v])
        {
            haveCycle = true;
            break;
        }
    }

    if (haveCycle)
    {
        cout << "Negative Cycle Detected";
    }
    else
    {
        for (long long i = 0; i < q; i++)
        {
            long long int d;
            cin >> d;
            if (dist[d] == 1e18)
            {
                cout << "Not Possible" << endl;
            }
            else
            {
                cout << dist[d] << endl;
            }
        }
    }

    return 0;
}