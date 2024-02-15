#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {

        string str;
        cin >> str;

        stack<char> stk;

        for (char s : str)
        {
            if (!stk.empty())
            {
                if (s == '0' && stk.top() == '1')
                {
                    stk.pop();
                }
                else if (s == '1' && stk.top() == '0')
                {
                    stk.pop();
                }
                else
                {

                    stk.push(s);
                }
            }
            else
            {
                stk.push(s);
            }
        }

        if (stk.empty())
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