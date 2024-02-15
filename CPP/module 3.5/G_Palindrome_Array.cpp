#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }

    int lastIndex = n - 1;
    int isPalindrome = 1;
    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[lastIndex - i])
        {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}