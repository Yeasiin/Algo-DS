#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    string words;
    getline(cin, words);

    int foundFlag = 0;
    int wordLength = 0;

    for (char c : words)
    {
        // cout << c;
        if (isalpha(c))
        {
            if (!foundFlag)
            {
                wordLength++;
            }
            foundFlag = 1;
        }
        else
        {
            foundFlag = 0;
        }
    }

    cout << wordLength;

    return 0;
}