#include <bits/stdc++.h>

using namespace std;

class Edge
{
public:
    int u, v, w;
    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};
const int N = 1e5;

vector<pair<int, int>> v[N];

int dist[N];
int par[N];

class Comp
{
public:
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        return a.second > b.second;
    }
};

void dijkstra(int src)
{

    priority_queue<pair<int, int>, vector<pair<int, int>>, Comp> pq;

    pq.push({src, 0});
    dist[src] = 0;

    while (!pq.empty())
    {
        int child = pq.top().first;
        int cost = pq.top().second;
        pq.pop();

        for (pair<int, int> each : v[child])
        {

            int childNode = each.first;
            int childCost = each.second;
            int newCost = cost + childCost;

            if (dist[childNode] > newCost)
            {
                dist[childNode] = newCost;
                par[childNode] = child;
                pq.push({childNode, newCost});
            }
        }
    }
}

int main()
{

    int n, m;
    cin >> n >> m;

    int s, f;
    cin >> s >> f;

    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
        v[b].push_back({a, c});
    }

    memset(par, -1, sizeof(par));

    for (int i = 1; i <= n; i++)
    {
        dist[i] = INT_MAX;
    }

    dijkstra(s);

    if (dist[f] == INT_MAX)
    {
        cout << -1;
    }
    else
    {
        cout << dist[f] << endl;

        vector<int> ans;
        int x = f;

        while (x != -1)
        {
            ans.push_back(x);
            x = par[x];
        }

        reverse(ans.begin(), ans.end());

        for (int e : ans)
        {
            cout << e << " ";
        }
    }

    return 0;
}