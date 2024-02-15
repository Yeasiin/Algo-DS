#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> va;
    vector<int> vb;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        va.push_back(x);
    }

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vb.push_back(x);
    }

    vector<int> vc;

    vc.insert(vc.end(), vb.begin(), vb.end());
    vc.insert(vc.end(), va.begin(), va.end());

    for (int i = 0; i < n * 2; i++)
    {
        cout << vc[i] << " ";
    }

    return 0;
}