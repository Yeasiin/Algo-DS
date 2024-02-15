#include <iostream>
#include <string>

using namespace std;

int main()
{
    int test;
    cin >> test;
    string s, x;

    for (int t = 0; t < test; t++)
    {
        cin >> s >> x;

        while (s.find(x) != -1)
        {

            s.replace(s.find(x), x.size(), "#");
        }
        cout << s << endl;
    }

    return 0;
}