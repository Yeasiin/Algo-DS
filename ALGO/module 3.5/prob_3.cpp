#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 1e4;
vector<int> nodes[N];
bool vis[N];

int dfs(int src)
{
    vis[src] = true;
    int cnt = 1;
    for (int each : nodes[src])
    {
        if (vis[each] == false)
        {
            cnt += dfs(each);
        }
    }
    return cnt;
}

int main()
{
    memset(vis, false, sizeof(vis));
    int n, e;

    cin >> n >> e;

    for (int i = 0; i < e; i++)
    {

        int p, c;
        cin >> p >> c;

        nodes[p].push_back(c);
        nodes[c].push_back(p);
    }
    vector<int> cnode;
    for (int i = 0; i < n; i++)
    {

        if (vis[i] == false)
        {
            cnode.push_back(dfs(i));
        }
    }

    sort(cnode.begin(), cnode.end());

    for (int i : cnode)
    {
        cout << i << " ";
    }

    return 0;
}