#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;

    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i] > 0)
        {
            cout << 1 << " ";
        }
        else if (v[i] < 0)
        {
            cout << 2 << " ";
        }
        else
        {
            cout << v[i] << " ";
        }
    }

    return 0;
}