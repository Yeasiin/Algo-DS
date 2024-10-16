#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 5;
int n, m;

char grid[N][N];
bool vis[N][N];

vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

int minArea = INT_MAX;

bool isValid(int ci, int cj)
{
    return ci >= 0 && cj >= 0 && ci < n && cj < m;
}

int cntArea = 0;

void bfs(int ci, int cj)
{
    vis[ci][cj] = true;
    queue<pair<int, int>> q;
    q.push({ci, cj});

    while (!q.empty())
    {
        pair<int, int> top = q.front();
        q.pop();
        cntArea++;

        for (int i = 0; i < d.size(); i++)
        {
            int ni = top.first + d[i].first;
            int nj = top.second + d[i].second;

            if (isValid(ni, nj) && !vis[ni][nj] && grid[ni][nj] != '-')
            {
                vis[ni][nj] = true;
                q.push({ni, nj});
            }
        }
    }
}

int main()
{
    memset(vis, false, sizeof(vis));
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char inp;
            cin >> inp;
            grid[i][j] = inp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] && grid[i][j] == '.')
            {
                cntArea = 0;
                bfs(i, j);
                minArea = cntArea < minArea ? cntArea : minArea;
            }
        }
    }
    if (minArea == INT_MAX)
    {
        cout << -1;
    }
    else
    {
        cout << minArea;
    }

    return 0;
}