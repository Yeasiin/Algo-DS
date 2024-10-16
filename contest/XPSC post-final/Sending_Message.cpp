#include <bits/stdc++.h>

using namespace std;

int main()
{

    while (!cin.eof())
    {

        string str1, str2;
        cin >> str1;
        cin >> str2;

        bool flag = true;
        queue<char> q1;
        for (int i = 0; i < str1.size(); i++)
        {
            q1.push(str1[i]);
        }

        queue<char> q2;
        for (int i = 0; i < str2.size(); i++)
        {
            q2.push(str2[i]);
        }

        while (true)
        {
            if (q1.empty() || q2.empty())
            {

                if (q1.empty())
                {
                    flag = false;
                }
                break;
            }

            char a = q2.front();
            char b = q1.front();

            if (a == b)
            {
                q1.pop();
                q2.pop();
            }
            else
            {
                q1.pop();
            }
        }

        if (flag)
        {
            cout << "Possible\n";
        }
        else
        {
            cout << "Impossible\n";
        }
    }

    return 0;
}