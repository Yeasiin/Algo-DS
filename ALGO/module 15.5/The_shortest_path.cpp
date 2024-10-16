#include <bits/stdc++.h>

using namespace std;

const int N = 1e5;
int par[N];
bool vis[N];
int dist[N];

vector<int> v[N];

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

        for (int child : v[top])
        {
            if (!vis[child])
            {
                vis[child] = true;
                dist[child] = dist[top] + 1;
                par[child] = top;
                q.push(child);
            }
        }
    }
}

int main()
{
    memset(dist, -1, sizeof(dist));
    memset(par, -1, sizeof(par));
    int n, m;
    cin >> n >> m;

    int start, end;
    cin >> start >> end;

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    dijkstra(start);

    if (vis[end])
    {
        vector<int> ans;
        int x = end;
        while (x != -1)
        {
            ans.push_back(x);
            x = par[x];
        }
        cout << ans.size() - 1 << endl;

        reverse(ans.begin(), ans.end());

        for (int each : ans)
        {
            cout << each << " ";
        }
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}