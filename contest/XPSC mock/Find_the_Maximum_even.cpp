#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr;

    for (int i = 0; i < n; i++)
    {

        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    sort(arr.begin(), arr.end(), greater<int>());

    int ans = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            int temp = arr[i] + arr[j];

            if (temp % 2 == 0)
            {
                ans = max(ans, temp);
            }
        }
    }

    for (auto e : arr)
    {
        if (e % 2 == 0)
        {
            ans = max(ans, e);
        }
    }

    cout << ans;

    return 0;
}