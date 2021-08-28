#include <bits/stdc++.h>

using namespace std;

void reversearray(int arr[], int start, int end)
{
    if (start > end)
    {
        return;
    }

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    reversearray(arr, start + 1, end-1);
}

void printarray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] <<" ";
    }

    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    
    cout << "The Original Array: ";
    printarray(arr, 6);

    reversearray(arr, 0, 5);

    cout << "The Reverses Array: ";
    printarray(arr, 6);
}