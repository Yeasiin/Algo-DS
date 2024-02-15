#include <bits/stdc++.h>

using namespace std;

int main()
{
    while (!cin.eof())
    {

        char s[100001];

        cin.getline(s, 100001);

        int sLen = strlen(s);
        sort(s, s + sLen);

        for (int i = 0; i < sLen; i++)
        {
            if (s[i] != ' ')
            {

                cout << s[i];
            }
        }

        cout << "\n";
    }

    return 0;
}
