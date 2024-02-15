#include <iostream>

using namespace std;

void fun(int times, char c)
{
    if (times > 1)
    {
        fun(times - 1, c);
    }
    cout << c << " ";
}

int main()
{

    int test;

    cin >> test;

    for (int i = 0; i < test; i++)
    {
        int n;
        cin >> n;
        char c;
        cin >> c;

        fun(n, c);
        cout << endl;
    }

    return 0;
}