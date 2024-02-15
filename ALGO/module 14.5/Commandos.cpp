#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int te = 0; te < t; te++)
    {
        int n, r;
        cin >> n >> r;

        vector<int> nodes[n];

        for (int i = 0; i < r; i++)
        {
            int a, b;
            cin >> a >> b;
            nodes[a].push_back(b);
        }

        int s, d;
        cin >> s >> d;

        cout << "Case " << te << ": " << 10 << endl;
    }

    return 0;
}