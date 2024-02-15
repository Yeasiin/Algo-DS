#include <iostream>
#include <limits.h>

using namespace std;

int main()
{

    int currValue;
    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = 0; i < 3; i++)
    {

        cin >> currValue;

        if (currValue > max)
        {
            max = currValue;
        }

        if (currValue < min)
        {
            min = currValue;
        }
    }

    cout << min << " " << max;

    return 0;
}