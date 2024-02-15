#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main()
{

    int n, m;

    cin >> n >> m;

    stack<int> nStack;
    queue<int> mQueue;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nStack.push(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        mQueue.push(x);
    }

    if (nStack.size() != mQueue.size())
    {
        cout << "NO\n";
    }
    else
    {
        bool flag = true;

        while (!nStack.empty())
        {
            if (nStack.top() != mQueue.front())
            {
                flag = false;
                break;
            }
            else
            {
                nStack.pop();
                mQueue.pop();
            }
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

    return 0;
}