#include <iostream>
#include <vector>
#include <cstring>
#include <queue>

using namespace std;

int main()
{

    int n, e;
    cin >> n >> e;

    vector<int> nodes[n];

    for (int i = 0; i < e; i++)
    {
        int p, c;
        cin >> p >> c;
        nodes[p].push_back(c);
        nodes[c].push_back(p);
    }

    int source;
    cin >> source;
    cout << nodes[source].size();

    return 0;
}