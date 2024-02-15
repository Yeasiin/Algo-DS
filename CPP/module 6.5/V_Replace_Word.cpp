#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;

    getline(cin, s);

    while (s.find("EGYPT") != -1)
    {
        s.replace(s.find("EGYPT"), 5, " ");
    };

    // s.replace(7, 5, ' ');

    cout << s;

    return 0;
}