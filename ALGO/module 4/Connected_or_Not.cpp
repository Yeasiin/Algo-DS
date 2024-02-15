#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> nodes[n];

    for (int i = 0; i < e; i++)
    {
        int p, c;
        cin >> p >> c;
        nodes[p].push_back(c);
    }

    // cout << "hello";
    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int to, from;
        cin >> to >> from;

        bool flag = false;
        if (to == from)
        {
            flag = true;
        }
        else
        {
            for (int each : nodes[to])
            {
                if (each == from)
                {
                    flag = true;
                    break;
                }
            }
        }
        if (flag)
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