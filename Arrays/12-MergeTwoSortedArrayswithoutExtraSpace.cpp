#include <bits/stdc++.h>

using namespace std;

void merge(int arr1[], int arr2[], int m, int n)
{
    int i = 0;

    while (arr1[m - 1] > arr2[0])
    {
        if (arr1[i] > arr2[0])
        {
            swap(arr1[i], arr2[0]);
            sort(arr2, arr2 + n);
        }
        i++;
    }
}

int main()
{
    int arr1[69], arr2[69], m, n;

    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> arr1[i];
    }

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    merge(arr1, arr2, m, n);

    cout << "After Merging \nFirst Array: ";
    for (int i = 0; i < m; i++)
    {
        cout << arr1[i] << " ";
    }

    cout << "\nSecond Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }

    return 0;
}