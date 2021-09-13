#include <bits/stdc++.h>

using namespace std;

vector<int> nums;

int sortarr(vector<int>& nums)
{
    int lo = 0;
    int hi = nums.size() - 1;
    int mid = 0;

    while (mid <= hi)
    {
        switch (nums[mid])
        {
            case 0:
                swap(nums[lo++], nums[mid++]);
                break;
                
            case 1:
                mid++;
                break;

            case 2:
                swap(nums[mid], nums[hi--]);
                break;
        }
    }
    return 0;
        
}


void printvector(vector<int> nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    cout << endl;
}

int main()
{
    int val;
    int n;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> val;
        nums.push_back(val);
    }

    sortarr(nums);
    printvector(nums);
    return 0;
}