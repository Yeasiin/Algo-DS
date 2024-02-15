#include <iostream>
#include <string>
#include <queue>

using namespace std;

class cmp
{
public:
    bool operator()(pair<string, int> a, pair<string, int> b)
    {
        if (a.first == b.first)
        {
            if (a.second < b.second)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else if (a.first > b.first)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    int n;
    cin >> n;

    priority_queue<pair<string, int>, vector<pair<string, int>>, cmp> pq;

    for (int i = 0; i < n; i++)
    {
        int num;
        string name;
        cin >> name >> num;

        pq.push({name, num});
    }

    while (!pq.empty())
    {
        pair<string, int> top = pq.top();
        pq.pop();

        cout << top.first << " " << top.second << endl;
    }

    return 0;
}