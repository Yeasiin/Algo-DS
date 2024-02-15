#include <iostream>
#include <stack>

using namespace std;

int main()
{

    stack<int> s;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }

    stack<int> s2;

    while (!s.empty())
    {
        int val = s.top();
        s.pop();
        s2.push(val);
    }

    while (!s2.empty())
    {
        cout << s2.top() << " ";
        s2.pop();
    }

    return 0;
}