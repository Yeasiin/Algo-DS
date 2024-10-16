#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        string rest = s.substr(2);

        if (rest.size() == 2)
        {
            if (stoi(rest) < 10)
            {
                cout << "NO\n";
            }
            else if (stoi(rest) > 19)
            {
                cout << "NO\n";
            }
        }
        else if (stoi(rest) < 2)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }

        // cout << s.substr(2) << endl;
    }

    return 0;
}