#include <bits/stdc++.h>

using namespace std;

int main()
{

    int test;
    cin >> test;

    for (int t = 0; t < test; t++)
    {

        int n;
        cin >> n;

        char chr[n + 1];

        for (int i = 0; i < n; i++)
        {
            char inp;
            cin >> inp;
            chr[i] = inp;
        }

        chr[n] = 'X';

        int cnt = 0;

        int flag = 1;
        int increment = 0;
        while (true)
        {
            increment++;

            if (chr[increment] == 'X')
                break;

            if (chr[increment] == '*')
            {
                if (flag == 1)
                {
                    flag = 2;
                }
                else
                {
                    break;
                }
            }

            if (chr[increment] == '.')
            {
                flag = 1;
            }

            if (chr[increment] == '@')
            {
                cnt++;
                flag = 1;
            }
        }
        cout << cnt << " ";
        if (t != test)
        {
            cout << endl;
        }
    }

    return 0;
}