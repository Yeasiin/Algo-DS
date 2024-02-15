#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b)
{
    if (a.first == b.first)
    {
        if (a.second > b.second)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else if (a.first < b.first)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    vector<pair<string, int>> pr;

    int t;
    cin >> t;
    for (int test = 0; test < t; test++)
    {
        string name;
        int roll;
        cin >> name >> roll;

        pr.push_back({name, roll});
    }

    sort(pr.begin(), pr.end(), cmp);

    for (auto dq : pr)
    {
        cout << dq.first << " " << dq.second << endl;
    }

    return 0;
}