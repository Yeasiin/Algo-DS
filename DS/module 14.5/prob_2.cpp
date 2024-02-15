#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main()
{

    int n, m;

    stack<int> s;
    queue<int> q;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }

    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    if (s.size() == q.size())
    {
        bool flag = true;
        for (int i = 0; i < s.size(); i++)
        {
            if (s.top() != q.front())
            {
                flag = false;
            }
            s.pop();
            q.pop();
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
    else
    {
        cout << "NO\n";
    }

    return 0;
}