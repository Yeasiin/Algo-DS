#include <iostream>
#include <vector>
#include <cstring>

using namespace std;
const int N = 1e4;
vector<int> nodes[N];
bool vis[N];

int dfs(int source)
{
    // cout << source;
    vis[source] = true;
    int count = 1;

    for (int each : nodes[source])
    {
        if (vis[each] == false)
        {
            count += dfs(each);
        }
    }
    return count;
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

    int source;
    cin >> source;

    cout << dfs(source);

    return 0;
}