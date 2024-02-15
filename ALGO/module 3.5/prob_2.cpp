#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

const int N = 1e4;

vector<int> nodes[N];
bool vis[N];

bool dfs(int src)
{
    vis[src] = true;

    for (int each : nodes[src])
    {
        if (vis[each] == false)
        {
            dfs(each);
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
        int p, c;
        cin >> p >> c;

        nodes[p].push_back(c);
        nodes[c].push_back(p);
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (vis[i] == false)
        {
            cnt++;
            dfs(i);
        }
    }

    cout << cnt;

    return 0;
}