#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t;
    cin >> t;

    set<int> s1;

    while (t--)
    {

        int a, b;
        cin >> a;
        if (a == 1)
        {
            cin >> b;
            s1.insert(b);
        }
        else
        {
            if (s1.empty())
            {
                cout << "empty\n";
            }
            else
            {
                int rev = *s1.begin();
                cout << rev << "\n";
                s1.erase(rev);
            }
        }
    }

     return 0;
}