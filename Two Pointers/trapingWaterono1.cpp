#include <iostream>
#include <bits/stdc++.h>

// O(n) Time
// O(n) Space

int trap(vector<int> &height)
{

    if (height.size() ==0){
        return 0 ;
    }    

    int maxl = height[0];
    int maxr = height[height.size()-1];
    int l = 0 ;
    int r =  height.size()-1;
    
    int res=0;

    while (l<r){
        if (maxl< maxr){
            l++;
            maxl = max(maxl,height[l]);
            res += maxl - height[l];
        }else{
            r--;
            maxr = max(maxr , height[r]);
            res += maxr- height[r];
        }
    }

    return res;


}

int main()

{

    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};

    cout << trap(height);
    return 0;
}