#include <bits/stdc++.h>

using namespace std;

int kadaneAlgo(int arr[], int n)
{
    int max_till_now = INT_MIN, max_here = 0;

    for (int i = 0; i < n; i++)
    {
        max_here = max_here + arr[i];

        if (max_till_now < max_here)
        {
            max_till_now = max_here;
        }

        if (max_here < 0)
        {
            max_here = 0;
        }
    }
    return max_till_now;
}

int main()
{
    int arr[50], n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Maximum contiguous sum is: " << kadaneAlgo(arr, n);
}