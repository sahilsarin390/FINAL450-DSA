#include <bits/stdc++.h>

using namespace std;

int srt(int arr[], int n)
{
    int j = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] < 0)
        {
            if(i != j)
            {
                swap(arr[i], arr[j]);
            }
            j++;
        }
    }
    return 0;
}

void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[50], n;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    srt(arr, n);
    printarr(arr, n);

    return 0;
}