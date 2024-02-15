#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> v = {{}, {2}, {1, 3}, {2}};

    for (int i = 0; i < 4; i++)
    {
        for (int e : v[i])
        {
            cout << i << "=> " << e << endl;
        }
        // cout << i << endl;
    }
}