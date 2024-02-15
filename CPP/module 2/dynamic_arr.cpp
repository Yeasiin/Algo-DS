#include <iostream>

using namespace std;

int main()
{
    int *a = new int[20];

    a[0] = 20;
    a[1] = 30;
    a[2] = 40;
    a[3] = 50;
    a[4] = 60;

    for (int i = 0; i < 20; i++)
    {
        cout << a[i] << endl;
    }

    cout << "hello world " << a[0];

    return 0;
}