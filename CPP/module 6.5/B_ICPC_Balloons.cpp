#include <iostream>

using namespace std;

int main()
{

    int test;
    cin >> test;

    for (int t = 0; t < test; t++)
    {
        int sLen;

        cin >> sLen;

        // char s[sLen + 1];

        int feqArr[26] = {0};

        char s;
        for (int i = 0; i < sLen; i++)
        {
            cin >> s;

            if (feqArr[s - 'A'] == 0)
            {
                feqArr[s - 'A'] += 2;
            }
            else
            {
                feqArr[s - 'A'] += 1;
            }
        }

        int totalBallon = 0;

        for (int i = 0; i < 26; i++)
        {
            totalBallon += feqArr[i];
        }

        cout << totalBallon << endl;
    }

    return 0;
}