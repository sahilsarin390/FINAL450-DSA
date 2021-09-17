#include<bits/stdc++.h>

using namespace std;

int getMinDiff(int arr[], int n, int k)
{
    sort(arr, arr+n);

    int ans = arr[n-1] - arr[0];

    int smallest = arr[0] + k;
    int largest = arr[n-1] - k;
    int newMin, newMax;

    for(int i = 0; i < n-1; i++)
    {
        newMin = min(smallest, arr[i+1] - k);
        newMax = max(largest, arr[i] + k);

        if(newMin < 0)
        {
            continue;
        }

        ans = min(ans, newMax - newMin);
    }

    return ans;
}

int main()
{
    int arr[50], n, k;
    cout << "Enter the Number of elements in the array: ";
    cin >> n;

    cout << "Enter the elements of array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the value of k: ";
    cin >> k;

    cout << "The Minimized Maximum difference is: "<< getMinDiff(arr, n, k)<< endl;
    cout << "The array is: ";
    for(int i = 0; i < n; i++)
    {
        cout <<  arr[i] << " ";
    }

    return 0;
}