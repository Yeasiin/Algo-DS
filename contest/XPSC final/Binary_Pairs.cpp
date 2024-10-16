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

        string s;
        cin >> s;

        stack<char> q1;

        for (int i = 0; i < n; i++)
        {
            q1.push(s[i]);
        }

        int cnt = 0;

        while (!q1.empty())
        {
            char top = q1.top();
            q1.pop();
            if (!q1.empty())
            {
                char second = q1.top();
                if (top == '0' && second == '1' || top == '1' && second == '0')
                {
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}