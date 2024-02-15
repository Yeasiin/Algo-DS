#include <iostream>
#include <vector>
#include <cstring>
#include <limits.h>

using namespace std;

class Edge
{
public:
    int u;
    int v;
    int c;

    Edge(int u, int v, int c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};

int main()
{

    int v, e;
    cin >> v >> e;

    vector<Edge> nodes;

    for (int i = 1; i <= e; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;

        nodes.push_back(Edge(a, b, c));
    }

    int dist[v + 1];
    for (int i = 1; i <= v; i++)
    {
        dist[i] = INT_MAX;
    }

    dist[1] = 0;

    for (int i = 1; i < v; i++)
    {
        for (auto ed : nodes)
        {

            if (dist[ed.u] < INT_MAX && dist[ed.u] + ed.c < dist[ed.v])
            {
                dist[ed.v] = dist[ed.u] + ed.c;
            }
        }
    }

    for (int i = 1; i <= v; i++)
    {
        if (dist[i] != INT_MAX)
        {

            cout << dist[i] << " ";
        }
        else
        {
            cout << 30000 << " ";
        }
    }

    return 0;
}