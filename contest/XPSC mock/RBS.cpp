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

        char chr;
        int a = 0;
        int b = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> chr;

            if (chr == '(')
            {
                a++;
            }
            else if (chr == ')')
            {
                b++;
            }
        }

        if (a == b)
        {
            cout << "Possible" << endl;
        }
        else
        {
            cout << "Impossible" << endl;
        }
    }
    return 0;
}