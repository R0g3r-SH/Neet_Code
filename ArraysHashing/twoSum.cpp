#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{

    unordered_map<int, int> pos;
    int rest;

    for (int i = 0; i < nums.size(); i++)
    {
        {
            rest = target - nums[i];
            if (pos.count(rest))
            {
                return {pos[rest],i};
            }
            else
            {
                pos[nums[i]] = i;
            }
        }
    }

    return {-1, -1};
}
int main()
{

    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    cout << "["<< twoSum(nums, target)[0] << "," << twoSum(nums, target)[1] << "]";

 
    return 0;
}