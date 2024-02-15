#include <bits/stdc++.h>

using namespace std;
const int N = 1e5;
vector<int> nodes[N];
bool vis[N];
int dist[N];

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    vis[s] = true;
    dist[s] = 0;

    while (!q.empty())
    {
        int top = q.front();
        q.pop();

        for (int child : nodes[top])
        {
            if (vis[child] == false)
            {
                vis[child] = true;
                dist[child] = dist[top] + 1;
                q.push(child);
            }
        }
    }
}

int main()
{

    int n, e;
    cin >> n >> e;

    memset(dist, -1, sizeof(dist));

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;

        nodes[a].push_back(b);
        nodes[b].push_back(a);
    }

    int src, d, k;
    cin >> src >> d >> k;

    bfs(src);
    if (dist[d] != -1 && ceil(double(dist[d]) / 2) <= k)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}