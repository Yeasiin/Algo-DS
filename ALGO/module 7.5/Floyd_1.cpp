
#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int node[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int inp;
            cin >> inp;
            node[i][j] = inp;
        }
    }

    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (node[i][k] + node[k][j] < node[i][j])
                {
                    node[i][j] = node[i][k] + node[k][j];
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << node[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}