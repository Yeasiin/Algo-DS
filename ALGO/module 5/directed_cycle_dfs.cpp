#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

bool isCycle = false;

void dfs(vector<int> nodes[], bool vis[], bool path[], int src)
{
    vis[src] = true;
    path[src] = true;
    cout << src << " ";
    for (int child : nodes[src])
    {
        if (path[child] == true)
        {
            isCycle = true;
        }
        if (vis[child] == false)
        {
            dfs(nodes, vis, path, child);
        }
    }
    path[src] = false;
};

int main()
{

    int n, e;
    cin >> n >> e;
    vector<int> nodes[n];

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        nodes[a].push_back(b);
    }

    isCycle = false;

    bool vis[n];
    bool path[n];

    memset(vis, false, sizeof(vis));
    memset(path, false, sizeof(vis));

    for (int i = 0; i < n; i++)
    {
        if (vis[i] == false)
        {
            dfs(nodes, vis, path, i);
        }
    }

    isCycle ? cout << "YES\n" : cout << "NO\n";

    return 0;
}