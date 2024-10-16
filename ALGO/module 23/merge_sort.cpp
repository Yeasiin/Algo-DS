#include <bits/stdc++.h>

using namespace std;

void merge(int arr[], int l, int m, int r)
{

    int lSize = (m - l) + 1;
    int rSize = r - m;

    int lArr[lSize], rArr[rSize];

    int k = 0;
    for (int i = l; i <= m; i++)
    {
        lArr[k] = arr[i];
        k++;
    }
    k = 0;
    for (int i = m + 1; i <= rSize; i++)
    {
        rArr[k] = arr[i];
        k++;
    }

    int i = 0;
    int j = 0;

    int curr = l;

    while (i < lSize && j < rSize)
    {

        if (lArr[i] <= rArr[j])
        {
            arr[curr] = lArr[i];
            i++;
        }
        else
        {
            arr[curr] = rArr[j];
            j++;
        }
        curr++;
    }
}

void merge_sort(int arr[], int l, int r)
{

    if (l < r)
    {
        int mid = (r + l) / 2;

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