#include <iostream>
#include <bits/stdc++.h>

bool containsDuplicate(vector<int> &nums)
{
    unordered_set<int> seen;

    for (int num : nums)
    {

        if (seen.count(num)){
            return true;
        }else{
            seen.insert(num);
        }
    }

    return false;
}

int main()
{

    vector<int> nums = {1, 2, 3, 1};

    return 0;
}
