#include <bits/stdc++.h>

using namespace std;
bool flag = false;

long long int inp;

void recur(long long int n)
{

    if (n == inp)
    {
        flag = true;
    }
    if (n > inp)
    {
        return;
    }

    recur(n * 10);
    recur(n * 20);
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        flag = false;
        cin >> inp;
        recur(1);

        flag ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}