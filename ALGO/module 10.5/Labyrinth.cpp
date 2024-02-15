#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<char> path;

vector<pair<pair<int, int>, char>> d = {{{0, 1}, 'R'}, {{0, -1}, 'L'}, {{1, 0}, 'D'}, {{-1, 0}, 'U'}};

pair<int, int> aIndex;
pair<int, int> bIndex;

bool isValid(int n, int m, int ci, int cj)
{
    return (ci >= 0 && cj >= 0 && ci < n && cj < m);
}

bool bfs2D(vector<vector<char>> grid,
           vector<vector<char>> br,
           vector<vector<bool>> vis,
           int n, int m, int si, int sj)
{

    vis[si][sj] = true;

    queue<pair<int, int>> q;
    q.push({si, sj});

    while (!q.empty())
    {
        pair<int, int> top = q.front();
        q.pop();

        if (grid[top.first][top.second] == 'B')
        {
            while (true)
            {
                path.push_back(br[top.first][top.second]);

                if (path.back() == 'L')
                    top.second++;

                if (path.back() == 'R')
                    top.second--;

                if (path.back() == 'U')
                    top.first++;

                if (path.back() == 'D')
                    top.first--;

                if (top.first == aIndex.first && top.second == aIndex.second)
                {
                    break;
                }
            }
            return true;
        }

        for (int i = 0; i < d.size(); i++)
        {
            int newI = top.first + d[i].first.first;
            int newJ = top.second + d[i].first.second;

            if (isValid(n, m, newI, newJ) && !vis[newI][newJ] && grid[newI][newJ] != '#')
            {
                br[newI][newJ] = d[i].second;
                vis[newI][newJ] = true;
                q.push({newI, newJ});
            }
        }
    }
    return false;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<char>> grid(n, vector<char>(m));
    vector<vector<char>> br(n, vector<char>(m));
    vector<vector<bool>> vis(n, vector<bool>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char c;
            cin >> c;
            grid[i][j] = c;

            if (c == 'A')
            {
                aIndex = {i, j};
            }
            if (c == 'B')
            {
                bIndex = {i, j};
            }
        }
    }

    bool flag = bfs2D(grid, br, vis, n, m, aIndex.first, aIndex.second);

    flag ? cout << "YES" : cout << "NO";
    cout << endl;

    reverse(path.begin(), path.end());

    cout << path.size() << endl;

    for (auto p : path)
    {
        cout << p;
    }

    return 0;
}