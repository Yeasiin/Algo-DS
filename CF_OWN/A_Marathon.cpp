#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int a;
        cin >> a;

        int tmp;
        int cnt = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> tmp;

            if (tmp > a)
            {
                cnt++;
            }
        }

        cout << cnt << endl;
    }
    return 0;
}