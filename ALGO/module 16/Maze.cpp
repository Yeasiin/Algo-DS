#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 5;

char grid[N][N];
char dr[N][N];
bool vis[N][N];

pair<int, int> s;
pair<int, int> e;

int n, m;

class Dir
{
public:
    int first;
    int second;
    char d;

    Dir(int a, int b, char c)
    {
        this->first = a;
        this->second = b;
        this->d = c;
    }
};

vector<Dir> d = {Dir(0, 1, 'R'),
                 Dir(0, -1, 'L'),
                 Dir(-1, 0, 'U'),
                 Dir(1, 0, 'D')};

bool isValid(int ci, int cj)
{
    return ci >= 0 && cj >= 0 && ci < n && cj < m;
}

void BFS(pair<int, int> src)
{

    vis[src.first][src.second] = true;

    queue<pair<int, int>> q;
    q.push({src.first, src.second});

    while (!q.empty())
    {
        pair<int, int> top = q.front();
        q.pop();

        for (int i = 0; i < d.size(); i++)
        {

            int ni = top.first + d[i].first;
            int nj = top.second + d[i].second;

            if (isValid(ni, nj) && !vis[ni][nj] && grid[ni][nj] != '#')
            {
                vis[ni][nj] = true;
                dr[ni][nj] = d[i].d;
                q.push({ni, nj});
            }
        }
    }
}

int main()
{

    memset(dr, '-', sizeof(dr));
    memset(vis, false, sizeof(vis));

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char inp;
            cin >> inp;

            grid[i][j] = inp;

            if (inp == 'R')
            {
                s = {i, j};
            }

            if (inp == 'D')
            {
                e = {i, j};
            }
        }
    }

    BFS(s);

    if (vis[e.first][e.second])
    {
        int a = e.first;
        int b = e.second;

        while (dr[a][b] != '-')
        {

            if (dr[a][b] == 'U')
            {
                dr[a][b] = 'X';
                a += 1;
            }
            else if (dr[a][b] == 'D')
            {
                dr[a][b] = 'X';
                a -= 1;
            }
            else if (dr[a][b] == 'L')
            {
                dr[a][b] = 'X';
                b += 1;
            }
            else if (dr[a][b] == 'R')
            {
                dr[a][b] = 'X';
                b -= 1;
            }
        }

        dr[e.first][e.second] = 'D';

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (dr[i][j] == 'X')
                {
                    grid[i][j] = 'X';
                };
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << grid[i][j];
        }
        cout << endl;
    }

    return 0;
}