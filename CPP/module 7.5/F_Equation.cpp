#include <iostream>

using namespace std;

long long int cal(int n, int times)
{

    long long total = n;

    for (int i = 1; i <= times - 1; i++)
    {
        total *= n;
    }
    return total;
}

int main()
{

    int x, y;
    cin >> x >> y;
    long long int total = 0;
    for (int i = 2; i <= y; i += 2)
    {
        total += cal(x, i);
    }

    cout << total;

    return 0;
}