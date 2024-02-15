#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;
vector<int> nodes[N];
int vis[N];

void dfs(int src)
{
    vis[src] = true;

    for (int child : nodes[src])
    {
        if (vis[child] == false)
        {
            dfs(child);
        }
    }
}

int main()
{
    memset(vis, false, sizeof(vis));

    int n, e;
    cin >> n >> e;

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        nodes[a].push_back(b);
        nodes[b].push_back(a);
    }

    vector<int> v;
    int totalRoad = 0;
    for (int i = 1; i <= n; i++)
    {

        if (vis[i] == false)
        {
            totalRoad++;
            v.push_back(i);
            dfs(i);
        }
    }

    cout << totalRoad - 1 << endl;

    for (int i = 0; i < v.size() - 1; i++)
    {
        cout << v[i] << " " << v[i + 1] << endl;
    }

    return 0;
}