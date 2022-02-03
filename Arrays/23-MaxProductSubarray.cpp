// This Solution won't work for negative numbers.

// class Solution
// {
// public:
//     // Function to find maximum product subarray
//     long long maxProduct(vector<int> arr, int n)
//     {
//         // code here
//         int res = arr[0];
//         for (int i = 0; i < n; i++)
//         {
//             int pro = arr[i];
//             for (int j = i + 1; j < n; j++)
//             {
//                 res = max(res, pro);
//                 pro *= arr[j];
//             }
//             res = max(res, pro);
//         }
//         return res;
//     }
// };

// 2-pass

// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    // Function to find maximum product subarray
    long long maxProduct(vector<int> arr, int n)
    {

        long long curr_product = 1, res = INT_MIN;

        for (auto i : arr)
        {
            curr_product = curr_product * i;
            res = max(curr_product, res);
            if (curr_product == 0)
            {
                curr_product = 1;
            }
        }

        curr_product = 1;

        for (int i = arr.size() - 1; i >= 0; i--)
        {
            curr_product = curr_product * arr[i];
            res = max(curr_product, res);
            if (curr_product == 0)
            {
                curr_product = 1;
            }
        }
        return res;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
} // } Driver Code Ends

// More optimized 1 pass:

class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int n = nums.size(), res = nums[0], l = 1, r = 1;
        for (int i = 0; i < n; i++)
        {
            l = (l)*nums[i];
            r = (r)*nums[n - 1 - i];
            res = max(res, max(l, r));
            if (l == 0)
                l = 1;
            if (r == 0)
                r = 1;
        }
        return res;
    }
};