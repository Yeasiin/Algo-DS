#include <iostream>
#include <vector>

using namespace std;

int main()
{

    char s;

    vector<int> v(26, 0);

    while (cin >> s)
    {
        v[s - 'a']++;
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] != 0)
        {
            cout << char(i + 'a') << " : " << v[i] << endl;
        }
    }

    return 0;
}