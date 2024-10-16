#include <bits/stdc++.h>

using namespace std;

const int N = 25;

char grid[N][N];
int dist[N][N];
bool vis[N][N];

pair<int, int> m;
pair<int, int> r;
pair<int, int> d;

int n;

void reset_(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            dist[i][j] = 0;
            vis[i][j] = false;
        }
    }
}

bool isValid(int ci, int cj)
{
    return ci >= 0 && cj >= 0 && ci < n && cj < n;
}

vector<pair<int, int>> dir = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

void dijkstra(pair<int, int> src)
{

    dist[src.first][src.second] = 0;
    vis[src.first][src.second] = true;

    queue<pair<int, int>> q;

    q.push({src.first, src.second});

    while (!q.empty())
    {
        pair<int, int> child = q.front();
        q.pop();

        for (int i = 0; i < dir.size(); i++)
        {
            int ni = child.first + dir[i].first;
            int nj = child.second + dir[i].second;

            if (isValid(ni, nj) && !vis[ni][nj] && grid[ni][nj] != 'O')
            {
                q.push({ni, nj});
                dist[ni][nj] = dist[child.first][child.second] + 1;
                vis[ni][nj] = true;
            }
        }
    }
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        cin >> n;

        reset_(n);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> grid[i][j];

                if (grid[i][j] == 'R')
                {
                    r = {i, j};
                }

                if (grid[i][j] == 'M')
                {
                    m = {i, j};
                }

                if (grid[i][j] == 'D')
                {
                    d = {i, j};
                }
            }
        }

        dijkstra(m);

        if (vis[r.first][r.second])
        {
            int step = dist[r.first][r.second];

            reset_(n);
            dijkstra(r);
            step += dist[d.first][d.second];
            cout << step << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}