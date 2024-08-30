#include <iostream>
#include <bits/stdc++.h>


vector<int> productExceptSelf(vector<int>& nums) {
    vector<int> r;
    vector<int> l;
    vector<int> res;

    if (nums.size() <=1){
        return nums;
    }

    int acc = 1 ;
    for(int num:nums ){
        acc = acc*num;
        r.push_back(acc);
    }

    acc = 1 ;
    for (int i = nums.size() - 1; i >= 0; i--) {
        acc= acc*nums[i];
        l.push_back(acc);
    }

    reverse(l.begin(), l.end());

    res.push_back(l[1]);
    for (int i = 2; i < nums.size(); i++) {
        int y = i-2;    

        int yres = r[y];
        int rres = l[i];
        res.push_back(yres*rres);
    }

    res.push_back(r[r.size()-2]);




return res;
}


int main(){
//Input: nums = [1,2,4,6]
//Output: [48,24,12,8]

    vector<int> nums = {1,2};
    vector<int> response = productExceptSelf(nums);


    for ( int num : response){
        cout<< num<<" ";
    }


    return 0;
}