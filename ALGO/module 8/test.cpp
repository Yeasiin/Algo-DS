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

int bfs(vector<vector<int>> adj, vector<vector<bool>> &vis, vector<vector<bool>> &dist, pair<int, int> src)
{
    queue<pair<int, int>> q;

    vis[src.first][src.second] = true;
    dist[src.first][src.second] = 0;
    q.push(src);

    while (!q.empty())
    {
        pair<int, int> top = q.front();
        q.pop();

        for (int i = 0; i < traverse.size(); i++)
        {
            int newI = top.first + traverse[i].first;
            int newJ = top.second + traverse[i].second;

            if (newJ >= 0 && newI >= 0 && newI < adj.size() && newJ < adj[0].size())
            {
                if (vis[newI][newJ] == false)
                {
                    dist[newI][newJ] = dist[top.first][top.second] + 1;
                    vis[newI][newJ] = true;
                    q.push({newI, newJ});
                }
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;

    for (int test = 0; test < t; test++)
    {

        int n, m;
        cin >> n >> m;

        vector<vector<int>> adj(n, vector<int>(m));
        vector<vector<bool>> vis(n, vector<bool>(m));
        vector<vector<bool>> dist(n, vector<bool>(m));

        int k1, k2;
        cin >> k1 >> k2;

        int q1, q2;
        cin >> q1 >> q2;

        bfs(adj, vis, dist, {k1, k2});

        if (vis[q1][q2])
        {
            cout << dist[q1][q2] << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
