#include <iostream>
#include <bits/stdc++.h>

vector<int> twoSum(vector<int> &nums, int target)
{

    int l= 0;
    int r = nums.size() - 1;

    while (l < r)
    {

        int curl = nums[l];
        int curr = nums[r];

        int res = curl + curr;

        if (res > target){
            r--;
        } else if (res< target){
            l++;
        } else {
            return {l+1,r+1};
        }

    }

    return {-1,-1};
}

int main()
{

    vector<int> numbers = {2, 7, 11, 15};

    int target = 9;

    vector<int> res = twoSum(numbers, target);

    for (int num : res)
    {
        cout << num;
    }

    return 0;
}