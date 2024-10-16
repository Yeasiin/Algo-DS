#include <bits/stdc++.h>

using namespace std;

const int N = 1000 + 5;

int dist[N];
bool vis[N];
vector<int> nodes[N];

void dijkstra(int src)
{
    vis[src] = true;
    dist[src] = 0;

    queue<int> q;
    q.push(src);

    while (!q.empty())
    {
        int top = q.front();
        q.pop();

        for (int child : nodes[top])
        {
            if (!vis[child])
            {
                dist[child] = dist[top] + 1;
                vis[child] = true;
                q.push(child);
            }
        }
    }
}

int main()
{

    int n, x;
    cin >> n >> x;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int inp;
            cin >> inp;

            if (inp == 1)
            {
                nodes[i].push_back(j);
            }
        }
    }

    dijkstra(x);

    for (int i = 1; i <= n; i++)
    {
        if (vis[i])
        {
            cout << dist[i] << " ";
        }
        else
        {
            cout << -1 << " ";
        }
    }

    return 0;
}