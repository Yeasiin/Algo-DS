#include <iostream>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

int inp;
const int N = 40;

char grid[N][N];
int dist[N][N];
bool vis[N][N];

pair<int, int> aStart;
pair<int, int> aEnd;

vector<pair<int, int>> d;

bool isValid(int ci, int cj)
{
    return ci >= 0 && cj >= 0 && ci < inp && cj < inp;
}

void bfs(pair<int, int> aStart)
{
    queue<pair<int, int>> q;
    dist[aStart.first][aStart.second] = 0;
    vis[aStart.first][aStart.second] = true;

    q.push({aStart.first, aStart.second});

    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();

        for (int i = 0; i < d.size(); i++)
        {
            int newI = par.first + d[i].first;
            int newJ = par.second + d[i].second;

            if (isValid(newI, newJ) && !vis[newI][newJ] && grid[newI][newJ] != 'T')
            {
                q.push({newI, newJ});
                vis[newI][newJ] = true;
                dist[newI][newJ] = dist[par.first][par.second] + 1;
            }
        }
    }
}

int main()
{

    d.push_back({0, 1});
    d.push_back({0, -1});
    d.push_back({-1, 0});
    d.push_back({1, 0});

    while (cin >> inp)
    {
        for (int i = 0; i < inp; i++)
        {
            for (int j = 0; j < inp; j++)
            {
                char chr;
                cin >> chr;

                grid[i][j] = chr;

                if (chr == 'S')
                {
                    aStart = {i, j};
                }

                if (chr == 'E')
                {
                    aEnd = {i, j};
                }
            }
        }
        memset(dist, -1, sizeof(dist));
        memset(vis, false, sizeof(vis));

        bfs(aStart);
        cout << dist[aEnd.first][aEnd.second] << endl;
    }

    return 0;
}