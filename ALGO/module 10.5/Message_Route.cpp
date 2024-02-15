#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#include <algorithm>

using namespace std;

void bfs(vector<int> nodes[], bool vis[], int parentArr[], int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while (!q.empty())
    {
        int top = q.front();
        q.pop();

        for (int child : nodes[top])
        {
            if (!vis[child])
            {
                vis[child] = true;
                parentArr[child] = top;
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

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        nodes[a].push_back(b);
        nodes[b].push_back(a);
    }

    bool vis[n + 1];
    int parentArr[n + 1];

    memset(vis, false, sizeof(vis));
    memset(parentArr, -1, sizeof(parentArr));

    bfs(nodes, vis, parentArr, 1);
    int x = n;

    vector<int> v;

    while (x != -1)
    {
        v.push_back(x);
        x = parentArr[x];
    }

    reverse(v.begin(), v.end());

    if (vis[n])
    {
        cout << v.size() << endl;
        for (auto c : v)
        {
            cout << c << " ";
        }
    }
    else
    {
        cout << "IMPOSSIBLE";
    }

    return 0;
}