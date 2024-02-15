#include <bits/stdc++.h>
using namespace std;

// Reads two integers and prints their sum
void basicIO()
{
    int a, b;
    cin >> a >> b;
    cout << a + b << endl;
}

const int N = 25;

char grid[N][N];
int vis[N][N];

int h, w;

int cnt = 0;

vector<pair<int, int>> d = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

bool isValid(int ci, int cj)
{
    return ci >= 0 && cj >= 0 && ci < h && cj < w;
}

void bfs(pair<int, int> gStart)
{

    queue<pair<int, int>> q;
    q.push({gStart.first, gStart.second});

    vis[gStart.first][gStart.second] = true;
    cnt++;

    while (!q.empty())
    {
        int ci = q.front().first;
        int cj = q.front().second;
        q.pop();

        for (int i = 0; i < d.size(); i++)
        {
            int nI = ci + d[i].first;
            int nJ = cj + d[i].second;

            if (isValid(nI, nJ) && vis[nI][nJ] == false && grid[nI][nJ] != '#')
            {
                cnt++;
                vis[nI][nJ] = true;
                q.push({nI, nJ});
            }
        }
    }
}

int main()
{

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        h = 0;
        w = 0;
        cnt = 0;
        memset(vis, false, sizeof(vis));
        pair<int, int> gStart;

        cin >> w >> h;

        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                char chr;
                cin >> chr;

                grid[i][j] = chr;

                if (chr == '@')
                {
                    gStart = {i, j};
                }
            }
        }
        bfs(gStart);

        cout << "Case " << i << ": " << cnt << endl;
    }

    return 0;
}
