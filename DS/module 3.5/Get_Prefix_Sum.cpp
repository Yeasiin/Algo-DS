#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // calculate prefix sum;
    vector<long long int> prefix(n);
    prefix[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = (prefix[i - 1] + a[i]);
    }

    // print prefix sum / but in reverse

    for (int i = n - 1; i >= 0; i--)
    {
        cout << prefix[i] << " ";
    }

    return 0;
}