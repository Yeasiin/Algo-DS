#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{

    int a = 10;
    int b = 5;

    int res = a ^ b;

    b = res ^ b;
    a = res ^ a;

    cout << a << " " << b << endl;

    return 0;
}