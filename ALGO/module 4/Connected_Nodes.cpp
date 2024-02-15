#include <iostream>
#include <vector>
#include <algorithm>

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
        nodes[c].push_back(p);
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;

        sort(nodes[x].begin(), nodes[x].end(), greater<int>());
        if (nodes[x].size() == 0)
        {
            cout << "-1";
        }
        else
        {
            for (int each : nodes[x])
            {
                cout << each << " ";
            }
        }
        cout << endl;
    }

    return 0;
}