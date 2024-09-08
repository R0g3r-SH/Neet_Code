#include <iostream>

#include <bits/stdc++.h>

vector<vector<int>> threeSum(vector<int> &nums)
{
    int target = 0;
    vector<vector<int>> res;

    int n = nums.size();
    if (n < 3)
    {
        return res;
    }

    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size() - 2; i++)
    {
        if (nums[i] > 0)
        {
            break;
        }

        if (i > 0 && nums[i] == nums[i - 1])
        {
            continue;
        }

        int l = i + 1;
        int r = nums.size() - 1;
        int fixed = nums[i];
        while (l < r)
        {

            int val = fixed + nums[l] + nums[r];

            if (val == 0)
            {
                res.push_back({fixed, nums[l], nums[r]});

                while (l < r && nums[l] == nums[l + 1])
                {
                    l++;
                }

                l++;
                while (l < r && nums[r] == nums[r - 1])
                {
                    r--;
                }
                r--;
            }
            else if (val < 0)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
    }

    return res;
}

int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> res = threeSum(nums);

    return 0;
}