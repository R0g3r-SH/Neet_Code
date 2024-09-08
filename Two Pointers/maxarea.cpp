#include <iostream>
#include <bits/stdc++.h>

int maxArea(vector<int> &height)
{

 int  l  = 0;
 int r = height.size()-1;
 int maxh = 0 ;

 while (l<r)
 {
    int h1 = height[l];
    int h2 = height[r];
    int w = r-l ; 
    int area  =  min(h1,h2) * w ;

    maxh = max(maxh,area);

    if(h1 <= h2){
        l++;
    }else if  (h1>h2){
        r--;
    }




 }
 



return maxh;
}





int main()
{                          
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout <<maxArea(height);

}