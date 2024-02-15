#include <iostream>
#include <cstring>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

void bfs(vector<int> nodes[], bool vis[], int parentArray[], int src)
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
            if (vis[child] == false)
            {
                vis[child] = true;
                parentArray[child] = top;
                q.push(child);
            }
        }
    }
}

int main()
{

    int n, m;
    cin >> n >> m;

    // n += 1;
    // m += 1;

    vector<int> nodes[n + 1];

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;

        nodes[a].push_back(b);
        nodes[b].push_back(a);
    }

    int parentArray[n + 1];
    int level[n + 1];

    bool vis[n + 1];

    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    memset(parentArray, -1, sizeof(parentArray));

    bfs(nodes, vis, parentArray, 1);

    vector<int> v;

    int x = n;

    while (x != -1)
    {
        v.push_back(x);
        x = parentArray[x];
    }

    if (vis[n] == false)
    {
        cout << "IMPOSSIBLE";
    }
    else
    {

        reverse(v.begin(), v.end());
        cout << v.size() << endl;
        for (int n : v)
        {
            cout << n << " ";
        }
    }
    return 0;
}