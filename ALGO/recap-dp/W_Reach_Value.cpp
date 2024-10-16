#include <bits/stdc++.h>

using namespace std;
long long int n;
bool recur(long long int i)
{

    if (n == i)
    {
        return true;
    }
    if (i > n)
    {
        return false;
    }

    int op1 = recur(i * 10);
    int op2 = recur(i * 20);

    return op1 || op2;
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        n = 0;
        cin >> n;

        if (recur(1))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}