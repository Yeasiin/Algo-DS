#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main()
{

    int n;

    cin >> n;

    queue<int> q;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    stack<int> s;

    while (!q.empty())
    {
        int val = q.front();
        s.push(val);
        q.pop();
    }
    while (!s.empty())
    {
        int val = s.top();
        cout << val << " ";
        s.pop();
    }

    return 0;
}