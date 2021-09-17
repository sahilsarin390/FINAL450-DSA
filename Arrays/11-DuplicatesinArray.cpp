#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[50],n;

    cout << "Enter the Number of elements in the array: ";
    cin >> n;

    cout << "Enter the elements of array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) 
    {
        arr[arr[i] % n] = arr[arr[i] % n] + n;
    }
    cout << "The repeating elements are : ";
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] >= n * 2) 
        {
            cout << i << " ";
        }
    }
    return 0;
}