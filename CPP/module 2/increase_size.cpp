#include <iostream>

using namespace std;

int main()
{

    int n;

    cin >> n;

    int *a = new int[n];
    int *b = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
    delete[] a;

    int oldN = n;

    cin >> n;
    a = new int[n];

    for (int i = 0; i < oldN; i++)
    {
        a[i] = b[i];
    }
    delete[] b;

    for (int i = oldN; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "-----\n";

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}