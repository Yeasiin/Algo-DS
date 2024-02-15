#include <iostream>
#include <vector>
#include <limits.h>
#include <queue>

using namespace std;

vector<pair<int, int>> traverse = {
    {1, 2},
    {1, -2},
    {-1, 2},
    {-1, -2},
    {2, 1},
    {-2, 1},
    {2, -1},
    {-2, -1},
};

int bfs(int n, int m, vector<vector<bool>> &vis, pair<int, int> src, pair<int, int> Q)
{
    queue<pair<pair<int, int>, int>> q;
    vis[src.first][src.second] = true;

    q.push({src, 0});

    int ans = -1;

    while (!q.empty())
    {
        pair<pair<int, int>, int> top = q.front();
        q.pop();
        if (top.first.first == Q.first && top.first.second == Q.second)
        {
            return top.second;
        }

        for (int i = 0; i < traverse.size(); i++)
        {

            int newI = top.first.first + traverse[i].first;
            int newJ = top.first.second + traverse[i].second;
            int level = top.second;

            if (newJ >= 0 && newI >= 0 && newI < n && newJ < m)
            {

                if (vis[newI][newJ] == false)
                {
                    vis[newI][newJ] = true;
                    q.push({{newI, newJ}, level + 1});
                }
            }
        }
    }

    return ans;
}

int main()
{
    int t;
    cin >> t;

    for (int test = 0; test < t; test++)
    {

        int n, m;
        cin >> n >> m;

        int k1, k2;
        cin >> k1 >> k2;

        int q1, q2;
        cin >> q1 >> q2;

        vector<vector<int>> adj(n, vector<int>(m));
        vector<vector<bool>> vis(n, vector<bool>(m));

        cout << bfs(n, m, vis, {k1, k2}, {q1, q2}) << endl;
    }

    return 0;
}