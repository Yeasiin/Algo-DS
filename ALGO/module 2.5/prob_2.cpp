#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{

    int n, e;
    cin >> n >> e;

    vector<int> nodes[n];

    for (int i = 0; i < e; i++)
    {
        int p, c;
        cin >> p >> c;
        nodes[p].push_back(c);
        nodes[c].push_back(p);
    }
    bool vis[n];
    memset(vis, false, sizeof(vis));
    vis[0] = true;

    int maxLevel;
    cin >> maxLevel;
    queue<pair<int, int>> q;

    q.push({0, 0});

    vector<int> finalV;

    while (!q.empty())
    {
        int par = q.front().first;
        int lev = q.front().second;
        q.pop();

        if (lev == maxLevel)
            finalV.push_back(par);

        for (int each : nodes[par])
        {
            if (vis[each] == false)
            {

                vis[each] = true;
                q.push({each, lev + 1});
            }
        }
    }

    reverse(finalV.begin(), finalV.end());

    for (int each : finalV)
    {
        cout << each << " ";
    }

    return 0;
}