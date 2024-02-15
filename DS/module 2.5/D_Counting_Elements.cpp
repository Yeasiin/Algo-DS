#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int _current = v[i] + 1;
        auto it = find(v.begin(), v.end(), _current);
        if (it != v.end())
        {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}