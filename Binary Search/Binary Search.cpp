#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int search(vector<int> nums, int target)
{
    int l = 0 ; 
    int r  = nums.size()-1;
    int m ;

    sort( nums.begin() , nums.end());

    while ( l <= r ){
        m = (l+r) /2 ;
        if ( nums[m] == target){
            return m;
        }else if (nums[m] > target ){
            r = m-1;
        }else{
            l = m + 1;
        }

    }

    return -1;

}

int main()
{
    vector<int> nums = {-1,0,3,5,9,12};
    int target = 9;

    cout << search (nums,target);

    return 0;
}
