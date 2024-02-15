#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, q;

    cin >> n >> q;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        int isFound = 0;

        int l = 0;
        int r = n - 1;

        while (l <= r)
        {
            int middle = (l + r) / 2;

            if (a[middle] == x)
            {
                isFound = 1;
                break;
            }
            else if (a[middle] < x)
            {
                l = middle + 1;
            }
            else
            {
                r = middle - 1;
            }
        }

        if (isFound)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }

    return 0;
}