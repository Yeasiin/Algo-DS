#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

bool isCycle;

void dfs(vector<int> nodes[], bool vis[], int parentArray[], int src)
{

    vis[src] = true;
    cout << src << " ";

    for (int each : nodes[src])
    {

        if (vis[each] == true && parentArray[src] != each)
        {
            isCycle = true;
        }
        if (vis[each] == false)
        {
            parentArray[each] = src;
            dfs(nodes, vis, parentArray, each);
        }
    }
}

int main()
{

    int n, e;
    cin >> n >> e;

    vector<int> nodes[n];
    bool vis[n];
    int parentArray[n];

    memset(vis, false, sizeof(vis));
    memset(parentArray, -1, sizeof(parentArray));

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;

        nodes[a].push_back(b);
        nodes[b].push_back(a);
    }

    isCycle = false;

    for (int i = 0; i < n; i++)
    {

        if (vis[i] == false)
        {
            dfs(nodes, vis, parentArray, i);
        }
    }

    isCycle ? cout << "YES" : cout << "NO";

    return 0;
}