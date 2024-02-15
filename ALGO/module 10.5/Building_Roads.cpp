#include <bits/stdc++.h>

using namespace std;

void bfs(vector<int> nodes[], bool vis[], int src)
{
    vis[src] = true;

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
                vis[child] = true;
                q.push(child);
            }
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> nodes[n + 1];

    for (int i = 0; i <= m; i++)
    {
        int a, b;
        cin >> a >> b;
        nodes[a].push_back(b);
        nodes[b].push_back(a);
    }

    int comp = 0;
    bool vis[n + 1];
    memset(vis, false, sizeof(vis));

    vector<int> toCon;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            toCon.push_back(i);
            bfs(nodes, vis, i);
            comp++;
        }
    }

    cout << comp - 1 << endl;

    if ((comp - 1) > 0)
    {
        for (int i = 0; i < toCon.size() - 1; i++)
        {
            cout << toCon[i] << " " << toCon[i + 1] << endl;
        }
    }

    return 0;
}