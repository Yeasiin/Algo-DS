#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    int t;
    cin >> t;

    map<char, bool> mp;

    string bp = "codeforces";

    for (auto c : bp)
    {
        mp[c] = true;
    }

    while (t--)
    {
        char ch;
        cin >> ch;

        if (mp[ch])
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}