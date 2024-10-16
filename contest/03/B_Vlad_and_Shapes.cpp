#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        char grid[n][n];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                char inp;
                cin >> inp;
                grid[i][j] = inp;
            }
        }

        int cnt = 0;
        vector<int> store;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == '1')
                {
                    cnt++;
                }
            }
            if (cnt > 0)
            {
                store.push_back(cnt);
            }
            cnt = 0;
        }

        bool flag = true;

        int last = 0;

        for (int c : store)
        {
            if (last > 0 && last != c)
            {
                flag = false;
            }
            last = c;
        }

        if (flag)
        {
            cout << "SQUARE" << endl;
        }
        else
        {
            cout << "TRIANGLE" << endl;
        }
    }

    return 0;
}