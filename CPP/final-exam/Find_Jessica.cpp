#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);

    string word;
    string toFind = "Jessica";

    int isThere = 0;
    while (ss >> word)
    {
        if (word == toFind)
        {
            isThere = 1;
            break;
        }
    }

    if (isThere)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}