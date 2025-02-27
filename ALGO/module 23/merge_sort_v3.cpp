#include <bits/stdc++.h>

using namespace std;

void merge(int arr[], int l, int m, int r)
{

    int lSize = m - l + 1;
    int rSize = r - m;

    int lArr[lSize];
    int rArr[rSize];

    int k = 0;
    for (int i = l; i <= m; i++)
    {
        lArr[k] = arr[i];
        k++;
    }

    k = 0;
    for (int i = m + 1; i <= r; i++)
    {
        rArr[k] = arr[i];
        k++;
    }

    k = l;

    int i = 0;
    int j = 0;

    while (i < lSize && j < rSize)
    {

        if (lArr[i] <= rArr[j])
        {
            arr[k] = lArr[i];
            i++;
        }
        else
        {
            arr[k] = rArr[j];
            j++;
        }
        k++;
    }

    while (i < lSize)
    {
        arr[k] = lArr[i];
        i++;
        k++;
    }

    while (j < rSize)
    {
        arr[k] = rArr[j];
        j++;
        k++;
    }
}

void merge_sort(int arr[], int l, int r)
{

    if (l < r)
    {
        int m = (l + r) / 2;

        merge_sort(arr, l, m);
        merge_sort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    merge_sort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}