#include<bits/stdc++.h>

using namespace std;

int minJumps(int arr[], int n)
{
    if(n==0 || n==1)
    {
        return 0;
    }

    int detectZero = false;

    if(arr[0] == 0) return -1; 


    int maxReach = arr[0];
    int steps = arr[0];
    int jumps = 0;

    for(int i=1; i<n-1; i++)
    {
        steps--;
        maxReach = max(maxReach, arr[i]+i);
        if(steps == 0)
        {
            jumps++;
            steps = maxReach - i;
            if(steps <= 0)
            {
                return -1;
            }
        }
    }
    return jumps+1;
}

int main()
{
    int arr[50], n;
    cout << "Enter the Number of elements in the array: ";
    cin >> n;

    cout << "Enter the elements of array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    cout << "The Minimum number of jumps to reach the end: " << minJumps(arr, n) <<endl;
}