#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        pair<int, int> st = {INT_MIN, 0};
        pair<int, int> st2 = {INT_MIN, 0};

        for (int i = 0; i < n; i++)
        {
            if (arr[i] > st.first)
            {
                st = {arr[i], i};
            }
        }
        arr[st.second] = -1;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] > st2.first)
            {
                st2 = {arr[i], i};
            }
        }

        if (st.second > st2.second)
        {
            cout << st2.second << " " << st.second;
        }
        else
        {
            cout << st.second << " " << st2.second;
        }

        cout << endl;
    }

    return 0;
}