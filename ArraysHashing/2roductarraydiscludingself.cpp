#include <iostream>
#include <bits/stdc++.h>

vector<int> productExceptSelf(vector<int> &nums)
{

}

int main()
{
    // Input: nums = [1,2,4,6]
    // Output: [48,24,12,8]

    vector<int> nums = {1, 2, 4, 6};
    vector<int> response = productExceptSelf(nums);

    for (int num : response)
    {
        cout << num << " ";
    }

    return 0;
}