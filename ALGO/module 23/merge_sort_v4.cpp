#include <bits/stdc++.h>

using namespace std;

void merge(int arr[], int l, int mid, int r)
{

    int lSize = mid - l + 1;
    int rSize = r - mid;

    int lArr[lSize], rArr[rSize];

    int k = 0;

    for (int i = l; i <= mid; i++)
    {
        lArr[k] = arr[i];
        k++;
    }
    k = 0;

    for (int i = mid + 1; i <= r; i++)
    {

        rArr[k] = arr[i];
        k++;
    }

    int i = 0, j = 0;
    k = l;

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
        k++;
        i++;
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
        int mid = (l + r) / 2;
        merge_sort(arr, l, mid);
        merge_sort(arr, mid + 1, r);

        merge(arr, l, mid, r);
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