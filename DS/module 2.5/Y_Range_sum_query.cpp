#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, q;

    cin >> n >> q;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        int sum = 0;
        for (int j = l - 1; j < r; j++)
        {
            sum += v[j];
        }

        cout
            << sum << endl;
    }

    return 0;
}