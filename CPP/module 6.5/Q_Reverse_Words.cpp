#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    string s;
    getline(cin, s);

    stringstream ss(s);

    string word;
    int isShowSpace = 0;
    while (ss >> word)
    {
        if (isShowSpace == 0)
        {
            reverse(word.begin(), word.end());

            cout << word;

            isShowSpace = 1;
        }
        else
        {
            cout << ' ';
            for (int i = word.size() - 1; i >= 0; i--)
            {
                cout << word[i];
            }
        }
    }

    return 0;
}