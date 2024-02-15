#include <iostream>
#include <queue>
#include <cstring>
#include <vector>

using namespace std;

vector<pair<int, int>> traverse = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};

void bfs(vector<vector<char>> node, vector<vector<bool>> &vis, int rsize, int cSize, pair<int, int> src)
{
    vis[src.first][src.second] = true;
    queue<pair<int, int>> q;
    q.push(src);

    while (!q.empty())
    {
        pair<int, int> top = q.front();
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int newI = top.first + traverse[i].first;
            int newJ = top.second + traverse[i].second;

            if (newI >= 0 && newJ >= 0 && newI < rsize && newJ < cSize && node[newI][newJ] == '.')
            {
                if (vis[newI][newJ] == false)
                {
                    vis[newI][newJ] = true;
                    q.push({newI, newJ});
                }
            }
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<char>> node(n, vector<char>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char inp;
            cin >> inp;
            node[i][j] = inp;
        }
    }

    vector<vector<bool>> vis(n, vector<bool>(m, false));

    int s1, s2;
    int d1, d2;
    cin >> s1 >> s2;
    cin >> d1 >> d2;

    pair<int, int> src = {s1, s2};

    bfs(node, vis, node.size(), node[0].size(), src);

    if (vis[d1][d2])
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}