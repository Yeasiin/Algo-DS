#include <iostream>

using namespace std;

int main()
{

    int test;
    cin >> test;

    for (int t = 0; t < test; t++)
    {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int evenCnt = 0;
        int oddCnt = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                evenCnt++;
            }
        }
        int operationCout = evenCnt - n / 2;

        if (operationCout < 0)
        {
            operationCout *= -1;
        }

        if (n % 2 == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << operationCout << endl;
        }
    }

    return 0;
}