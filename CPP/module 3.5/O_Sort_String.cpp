#include <iostream>

using namespace std;

int main()
{

    int n;

    cin >> n;

    int arr[26] = {0};

    for (int i = 0; i < n; i++)
    {
        char _temp;
        cin >> _temp;
        arr[_temp - 'a'] += 1;
    }

    for (int i = 0; i < 26; i++)
    {

        if (arr[i] != 0)
        {
            for (int j = 0; j < arr[i]; j++)
            {
                char chr = i + 'a';
                cout << chr;
            }
        }
    }

    return 0;
}