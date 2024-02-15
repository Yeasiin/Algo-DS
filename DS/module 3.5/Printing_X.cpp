#include <iostream>

#include <vector>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int l = 0;
    int r = n - 1;

    if (n == 1)
    {
        cout << "X";
        return 0;
    }
    int mid = n / 2;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (l == r && j == r && j == l)
            {
                cout << "X";
                break;
            }

            if (l == j)
            {
                cout << "\\";
            }
            else if (j == r)
            {
                cout << "/";
            }
            else
            {
                cout << " ";
            }
        }
        l++;
        r--;
        cout << endl;
    }

    return 0;
}