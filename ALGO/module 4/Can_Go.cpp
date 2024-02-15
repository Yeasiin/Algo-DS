#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};

void bfs(vector<vector<char>> grid,
         vector<vector<bool>> &visited,
         int r, int c, int rSize, int cSize)
{
    queue<pair<int, int>> q;
    q.push({r, c});

    visited[r][c] = true;

    while (!q.empty())
    {
        auto parent = q.front();
        q.pop();
        int x = parent.first;
        int y = parent.second;

        for (int i = 0; i < 4; i++)
        {
            int newX = x + dx[i];
            int newY = y + dy[i];

            if (newX >= 0 &&
                newY >= 0 &&
                newX < rSize &&
                newY < cSize &&
                !visited[newX][newY] &&
                grid[newX][newY] != '#')
            {
                // cout << "r=>" << newX << " c=>" << newY << endl;

                // if (newX == 2 && newY == 6)
                // {
                //     cout << "---";
                // }

                visited[newX][newY] = true;
                q.push({newX, newY});
            }
        }
    }
}

int main()
{
    int r, c;
    cin >> r >> c;

    vector<vector<char>> grid(r, vector<char>(c));
    vector<vector<bool>> visited(r, vector<bool>(c));

    pair<int, int> src, dst;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            char chr;
            cin >> chr;
            if (chr == '#')
            {
                grid[i][j] = '#';
            }
            else
            {
                grid[i][j] = chr;
            }
            if (chr == 'A')
            {
                src = {i, j};
            }
            if (chr == 'B')
            {
                dst = {i, j};
            }
        }
    }

    bfs(grid, visited, src.first, src.second, r, c);

    if (visited[dst.first][dst.second] == true)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}