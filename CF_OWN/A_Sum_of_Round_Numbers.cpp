#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        vector<int> v;

        int div = 10;

        while (n > 0)
        {
            int re = n % div;
            n -= re;

            div *= 10;

            if (re != 0)
            {
                v.push_back(re);
            }
        }

        cout << v.size() << endl;
        ;
        for (int i : v)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}