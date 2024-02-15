#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    long long int node[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int input;
            cin >> input;
            if (input == -1)
            {
                input = INT_MAX;
            }
            node[i][j] = input;
        }
    }
    int maxPath = INT_MIN;
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (node[i][k] != INT_MAX || node[k][j] != INT_MAX)
                {
                    if (node[i][k] + node[k][j] < node[i][j])
                    {
                        node[i][j] = node[i][k] + node[k][j];
                    }
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (node[i][j] > maxPath && node[i][j] != INT_MAX)
            {
                maxPath = node[i][j];
            }
        }
    }

    cout << maxPath;

    return 0;
}