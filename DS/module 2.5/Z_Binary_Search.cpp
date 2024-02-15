#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;

        auto isFound = find(v.begin(), v.end(), x);

        if (isFound != v.end())
        {
            cout << "found";
        }
        else
        {
            cout << "not found";
        }
        cout << endl;
    }

    return 0;
}