#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <queue>

using namespace std;

int main()
{
    int test;
    cin >> test;

    getchar();

    for (int t = 0; t < test; t++)
    {
        string str;
        getline(cin, str);

        stringstream ss(str);

        string s;

        map<string, int> mp;

        pair<string, int> rev = {"any", 0};
        while (ss >> s)
        {
            mp[s]++;

            if (mp[s] > rev.second)
            {
                rev.first = s;
                rev.second = mp[s];
            }
        }

        cout << rev.first << " " << rev.second << endl;
    }

    return 0;
}