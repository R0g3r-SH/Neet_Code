#include <iostream>

#include <bits/stdc++.h>

int longestConsecutive(vector<int> nums)
{
    unordered_set<int> newnums ;
    int maxl = 0;

    for (int num:nums){
        newnums.insert(num);
    }


    for(int num:nums){

        int currc = 0 ;
        
        if(!newnums.count(num-1)){
            int currn = num;
            while (newnums.count(currn))
            {
                currc++;
                currn ++; 
            }
            maxl = max(maxl, currc);
        }
    }



    return maxl;

}

int main()
{

    vector<int> nums = {100, 4, 200, 1, 3, 2};

    cout<<longestConsecutive(nums);

    return 0;
}