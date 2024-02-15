#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        string str;
        cin >> str;
        stack<char> stk;

        while (true)
        {
            bool isRunning = false;
            for (char s : str)
            {
                if (stk.empty())
                {
                    stk.push(s);
                }
                else
                {
                    if (s == '1' && stk.top() == '0')
                    {
                        stk.pop();
                        isRunning = true;
                    }
                    else
                    {
                        stk.push(s);
                    }
                }
            }
            str = "";

            if (stk.empty())
            {
                cout << "YES\n";
                break;
            }
            else if (!isRunning)
            {
                cout << "NO\n";
                break;
            }
            else
            {

                // stack reverse the string so using double stack to not make the string is reverse
                stack<char> rS;
                while (!stk.empty())
                {
                    rS.push(stk.top());
                    stk.pop();
                }
                while (!rS.empty())
                {
                    str += rS.top();
                    rS.pop();
                }

                isRunning = false;
            }
        }
    }

    return 0;
}
