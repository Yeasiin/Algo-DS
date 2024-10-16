#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int flag = 1;

    for (int i = 1; i <= (n * 2) - 1; i++)
    {
        for (int j = 1; j <= (n * 2) - 1; j++)
        {

            if (i == j)
            {
                cout << flag;
            }
            else if (i + j == (n * 2))
            {
                cout << flag;
            }
            else
            {
                cout << " ";
            }
        }
        if (flag >= 2)
        {
            flag = 0;
        }
        else
        {
            flag++;
        }
        cout << endl;
    }

    return 0;
}