#include <iostream>
#include <limits.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int currValue;
    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        cin >> currValue;

        if (currValue > max)
        {
            max = currValue;
        }
    }

    cout << max;

    return 0;
}