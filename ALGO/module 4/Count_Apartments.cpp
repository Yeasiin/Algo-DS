#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};

void bfs(vector<vector<char>> &grid,
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

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            char chr;
            cin >> chr;
            grid[i][j] = chr;
        }
    }
    int cnt = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (visited[i][j] == false && grid[i][j] == '.')
            {
                cnt++;
                bfs(grid, visited, i, j, r, c);
            }
        }
    }

    cout << cnt;

    return 0;
}