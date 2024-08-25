#include <iostream>
#include <bits/stdc++.h>

vector<int> switching(vector<int> res, int val)
{

    int storage = val;
    int curr;

    for (int i = 0; i < res.size(); i++)
    {
        curr = res[i];
        res[i] = storage;
        storage = curr;
    }

    return res;
}

vector<int> topKFrequent(vector<int> &nums, int k)
{
    vector<int> res;
    unordered_map<int, int> map;
    vector<vector<int>> frec(nums.size() - 1);
    

    int curMax = 0;

    for (int num : nums)
    {
        if (map.count(num))
        {

            map[num]++;
        }
        else
        {
            map[num] = 1;
        }
    }

    for (auto pair : map)
    {
        frec[pair.second].push_back(pair.first);
    }

    int idx = frec.size()-1;
    while (res.size() <= k || idx < 0)
    {

        for (int num : frec[idx]){
            if (res.size() == k){
                return res;
            }else{
                res.push_back(num);
            }


        }

        idx--;
        
    }

    return res;
}

int main()
{

    vector<int> nums = {1, 1, 1, 2, 2, 3};
    int k = 2;

    vector<int> result = topKFrequent(nums, k);

    for (int res : result)
    {
        cout << res;
    }

    return 0;
}