#include <iostream>
#include <vector>
#include <cstring>
#include <queue>

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

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        bool vis[n];
        memset(vis, false, sizeof(vis));

        queue<pair<int, int>> qq;

        int start, end;
        cin >> start >> end;

        if (start == end)
        {
            cout << 0 << endl;
        }
        else
        {

            qq.push({start, 0});
        }
        while (!qq.empty())
        {
            int par = qq.front().first;
            int lev = qq.front().second;
            qq.pop();

            for (int each : nodes[par])
            {

                if (vis[each] == false)
                {
                    vis[each] = true;
                    qq.push({each, lev + 1});

                    if (each == end)
                    {
                        cout << lev + 1 << endl;
                    }
                }
            }
        }
    }

    return 0;
}