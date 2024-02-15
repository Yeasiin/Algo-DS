#include <iostream>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;
bool isCycle;
void bfs(vector<int> nodes[], vector<bool> &vis,
         int parentArray[], int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while (!q.empty())
    {
        int parent = q.front();
        cout << parent << " ";
        q.pop();

        for (int each : nodes[parent])
        {
            if (vis[each] && parentArray[parent] != each)
            {
                isCycle = true;
            }

            if (vis[each] == false)
            {
                parentArray[each] = parent;
                vis[each] = true;
                q.push(each);
            }
        }
    }
}

int main()
{

    int n, e;
    cin >> n >> e;

    vector<int> nodes[n];
    vector<bool> vis(n);
    int parentArray[n];

    memset(parentArray, -1, sizeof(parentArray));

    for (int i = 0; i < e; i++)
    {
        int p, c;
        cin >> p >> c;

        nodes[p].push_back(c);
        nodes[c].push_back(p);
    }
    isCycle = false;
    for (int i = 0; i < n; i++)
    {

        if (vis[i] == false)
        {
            bfs(nodes, vis, parentArray, i);
        }
    }

    isCycle ? cout << "YES" : cout << "NO";

    return 0;
}