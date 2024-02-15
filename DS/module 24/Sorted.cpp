#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main()
{

    int test;
    cin >> test;

    for (int t = 0; t < test; t++)
    {

        int n;
        cin >> n;
        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        sort(v.begin(), v.end());

        set<int> unique;

        for (int i = 0; i < v.size(); i++)
        {

            unique.insert(v[i]);
        }

        for (auto each : unique)
        {
            cout << each << " ";
        }
        cout << endl;
    }

    return 0;
}