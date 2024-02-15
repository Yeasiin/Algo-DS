#include <iostream>

using namespace std;

int main()
{

    int t;
    cin >> t;

    for (int j = 0; j < t; j++)
    {
        char s[7];
        cin >> s;

        int sumL = 0;
        int sumR = 0;

        for (int i = 0; i < 6; i++)
        {

            if (i < 3)
            {
                sumL += s[i] - 48;
            }
            else
            {
                sumR += s[i] - 48;
            }
        }

        if (sumL == sumR)
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