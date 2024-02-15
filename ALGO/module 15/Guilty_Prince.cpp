#include <bits/stdc++.h>

using namespace std;

const int N = 25;

int n, m;
char grid[N][N];
bool vis[N][N];
int cnt = 0;
pair<int, int> aStart;

vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool isValid(int ci, int cj)
{
    return ci >= 0 && cj >= 0 && ci < n && cj < m;
}

void dfs(pair<int, int> start)
{
    cnt++;
    vis[start.first][start.second] = true;

    for (int i = 0; i < d.size(); i++)
    {
        int ci = start.first + d[i].first;
        int cj = start.second + d[i].second;

        if (isValid(ci, cj) && !vis[ci][cj] && grid[ci][cj] != '#')
        {
            dfs({ci, cj});
        }
    }
}

int main()
{

    int t;
    cin >> t;

    for (int te = 1; te <= t; te++)
    {
        memset(vis, false, sizeof(vis));
        cin >> m >> n;
        cnt = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];

                if (grid[i][j] == '@')
                {
                    aStart = {i, j};
                }
            }
        }

        dfs(aStart);

        cout << "Case " << te << ": " << cnt << endl;
    }

    return 0;
}