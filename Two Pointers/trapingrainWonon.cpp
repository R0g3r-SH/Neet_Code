#include <iostream>
#include <bits/stdc++.h>

// O(n) Time
// O(n) Space

int trap(vector<int> &height)
{
    vector<int> maxl{0};
    vector<int> maxr{0};
    int curmax = height[0];
    int res = 0;

    for (int i  = 1 ; i<height.size() ; i ++ )
    {
        curmax = max(height[i], curmax);
        maxl.push_back(curmax);
    }

    curmax = height[height.size()-1];

    for (int i = height.size() - 2; i >= 0; i--)
    {
        curmax = max(height[i], curmax);
        maxr.push_back(curmax);
    }

    reverse(maxr.begin(), maxr.end());

    for (int i = 0; i < height.size(); i++)
    {
        int currl = maxl[i];
        int curr = maxr[i];
        int rest = min(curr, currl) - height[i];

        
        if (rest < 0 ){
            continue;
        }else{
            res = res+rest;
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