#include <bits/stdc++.h>

using namespace std;

int maxSubArraySum(int arr[], int n)
{
    int max_till_now = INT_MIN, max_here = 0;

    for (int i = 0; i < n; i++)
    {
        max_here += arr[i];

        if(max_here > max_till_now)
        {
            max_till_now = max_here;
        }

        if(max_till_now > max_here)
        {
            max_here = 0;
        }
    }
    return max_till_now;
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

    int max_sum = maxSubArraySum(arr, n);

    cout << "Maximum Sum of Sub Array: " << max_sum;
}