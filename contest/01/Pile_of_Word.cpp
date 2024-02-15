#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int t;
    cin >> t;

    for (int test = 0; test < t; test++)
    {
        string s1, s2;
        vector<char> v1, v2;
        cin >> s1 >> s2;

        for (int i = 0; i < s1.size(); i++)
        {
            v1.push_back(s1[i]);
        }

        sort(v1.begin(), v1.end());

        for (int i = 0; i < s2.size(); i++)
        {
            v2.push_back(s2[i]);
        }
        sort(v2.begin(), v2.end());

        if (v1 == v2)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
