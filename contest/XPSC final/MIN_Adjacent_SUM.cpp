#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    sort(v.begin(), v.end());

    // int reserv = v[0];
    // v[0] = INT_MAX - 1000;

    cout << v[0] + v[1];

    return 0;
}