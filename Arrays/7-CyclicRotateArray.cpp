#include <bits/stdc++.h>

using namespace std;

void rotate(int arr[], int n)
{
    int i = 0, j = n-1;

    while (i != j)
    {
        swap(arr[i] ,arr[j]);
        i++;
    }
    
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

    cout << "Enter number of elements in Array: ";
    cin >> n;

    cout << "Enter elements of the Array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    rotate(arr, n);

    cout << "Rotated Array: ";
    printarr(arr, n);
}