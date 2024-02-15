#include <iostream>

using namespace std;

int main()
{

    char n[2];

    cin >> n;

    if (n[0] >= 'A' && n[0] <= 'z')
    {
        cout << "ALPHA\n";
        if (n[0] >= 'A' && n[0] <= 'Z')
        {
            cout << "IS CAPITAL\n";
        }
        else if (n[0] >= 'a' && n[0] <= 'z')
        {
            cout << "IS SMALL\n";
        }
    }
    else if (n[0] >= '0' && n[0] <= '9')
    {
        cout << "IS DIGIT\n";
    }

    return 0;
}