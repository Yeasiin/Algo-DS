#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    int a, b;

    cin >> a >> b;

    printf("a = %d , b = %d\n", a, b);

    int result = a ^ b;

    a = result ^ a;
    b = result ^ b;

    printf("a = %d , b = %d", a, b);
    return 0;
}