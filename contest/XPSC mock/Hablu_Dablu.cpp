#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool flag = true;
    bool run = true;

    sort(arr.begin(), arr.end(), greater<int>());

    while (h > 0 && run)
    {

        if (flag)
        {
            flag = false;
            arr[0]--;

            if (arr[0] == 0)
                run = false;
        }
        else
        {

            flag = true;

            if (arr[0] > 0)
            {
                run = true;
                h -= arr[0];
            }
            else
            {
                run = false;
            }
        }
    }

    if (h > 0)
    {
        cout << "Hablu" << endl;
    }
    else
    {
        cout << "Dablu";
    }

    return 0;
}