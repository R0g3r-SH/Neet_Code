#include <iostream>
#include <bits/stdc++.h>

int findMin(vector<int> &nums)
{
    int l = 0;
    int r = nums.size() - 1;
    int res = nums[0];

    
    while (l<=r) {
        
      int m  =  (l+r)/2;

      int val  = nums[m];

      if (val >= res){

        l = m + 1;

      }else{

        r  = m -1;

      }

      res = min(val, res);

    } 
  
    
  return res;

}

int main()
{


    vector<int> nums = {3, 4, 5, 1, 2};

    cout << findMin(nums);
    
    return 0;


}
