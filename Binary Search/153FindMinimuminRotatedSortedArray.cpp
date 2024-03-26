
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int findMin(vector<int> nums) 
{
    int lptr = 0;
    int rptr = nums.size()-1;
    int res = nums[0];

    while (lptr <= rptr){
        int m = (lptr+rptr)/2;

        res = min(nums[m], res);

        if (nums[lptr]< nums[rptr]){
            res = min(nums[lptr] , res); 
            return res;
        }

        if (nums[m] >= nums[lptr]){
            lptr =m+1; 
        }else{
            rptr = m-1;
        }


    }
    return res;
}

int main()
{

    vector <int> nums = {3,4,5,1,2} ;

    cout <<findMin(nums);



    return 0;

}
