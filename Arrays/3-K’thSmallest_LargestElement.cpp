#include <algorithm>
#include <iostream>

using namespace std;

int kthsmallest(int arr[], int n, int k)
{
    sort(arr, arr + n);
    return arr[k-1];
}

int kthlargest(int arr[], int n, int k)
{
    reverse(arr, arr + n);
    return arr[k-1];
}

int main()
{
    int arr[20], n, k;

    cin >> n;

    for(int i; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> k;

    cout << "The smallest Kth element in array: " << kthsmallest(arr, n, k) << endl;
    cout << "The Largest Kth element in array: " << kthlargest(arr, n, k);
    return 0;
}