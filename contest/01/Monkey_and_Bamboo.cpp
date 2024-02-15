#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int test;
    cin >> test;

    for (int t = 0; t < test; t++)
    {
        int h, a, b;
        cin >> h >> a >> b;

        if (h <= a)
        {
            cout << 1 << endl;
        }
        else if (a > b)
        {
            int ans = ceil((h - a) * 1.0 / (a - b) * 1.00);
            cout << ans * 2 + 1 << endl;
        }
        else
        {
            cout << "Impossible\n";
        }
    }

    return 0;
}
