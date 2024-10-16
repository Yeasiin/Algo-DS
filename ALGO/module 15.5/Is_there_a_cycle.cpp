#include <bits/stdc++.h>

using namespace std;

const int N = 55;

int n;
int flag = 0;
bool vis[N];
bool path[N];

vector<int> el[N];

void dfs(int src)
{

    vis[src] = true;
    path[src] = true;

    for (int each : el[src])
    {
        if (path[each] && vis[each])
        {
            flag = true;
        }
        if (!vis[each])
        {
            dfs(each);
        }
    }
    path[src] = false;
}

int main()
{
    memset(vis, false, sizeof(vis));

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int inp;
            cin >> inp;
            if (inp == 1)
            {
                el[i].push_back(j);
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        dfs(i);
    }

    cout << flag;

    return 0;
}