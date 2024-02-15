#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

class Edge
{
public:
    int u, v, c;
    Edge(int u, int v, int c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};

const int N = 1e5 + 5;
int dist[N];

int main()
{

    int n, e;
    cin >> n >> e;
    vector<Edge> edgeList;

    for (int i = 0; i < e; i++)
    {
        int u, v, c;
        cin >> u >> v >> c;
        edgeList.push_back(Edge(u, v, c));
    }

    for (int i = 0; i < n; i++)
    {
        dist[i] = INT_MAX;
    }

    dist[0] = 0;

    for (int i = 1; i < n - 1; i++)
    {
        for (auto ed : edgeList)
        {

            if (dist[ed.u] < INT_MAX && dist[ed.u] + ed.c < dist[ed.v])
            {
                dist[ed.v] = dist[ed.u] + ed.c;
            }
        }
    }

    bool haveCycle = false;

    for (auto ed : edgeList)
    {

        if (dist[ed.u] < INT_MAX && dist[ed.u] + ed.c < dist[ed.v])
        {
            haveCycle = true;
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << i << "=> " << dist[i] << endl;
    }

    return 0;
}