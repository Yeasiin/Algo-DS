#include <iostream>

using namespace std;

int main()
{

    int a, b, c;
    char s, q;

    cin >> a >> s >> b >> q >> c;

    int _answer;
    if (s == '+')
    {
        _answer = a + b;
    }
    else if (s == '-')
    {
        _answer = a - b;
    }
    else if (s == '*')
    {
        _answer = a * b;
    }

    if (c == _answer)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << _answer;
    }

    return 0;
}
