#include <istream>
#include <bits/stdc++.h>

int largestRectangleArea(vector<int> &heights)
{
    int maxArea = 0;
    deque <pair<int,int>> dq ;
    int hzsize = heights.size();

    for(int i = 0 ; i < heights.size(); i++){
        int curr = heights[i];
        int index  = i ;
        while (dq.size()>0 && curr< dq.back().second){
            int newidx = dq.back().first;
            int height = dq.back().second;

            maxArea = max(maxArea, height*(i-newidx));
            index=newidx;
            dq.pop_back();
        }

        dq.push_back(make_pair(index,curr));
        
        
    }

    for ( auto &pair : dq ){
        int h = pair.second;
        int i = pair.first;
        maxArea = max(maxArea, h * (hzsize - i));
    }


    return maxArea;
}

int main()
{

    vector<int> heights = {2,1,5,6,2,3};

    cout << largestRectangleArea(heights);

    return 0;
}