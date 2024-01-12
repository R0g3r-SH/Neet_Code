#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int largestRectangleArea(vector<int> heights)
{
    int maxarea = 0;

    deque<vector<int>> idx_height;

    for (int i = 0; i < heights.size(); i++)
    {

        int currheighth = heights[i];
        vector<int> temp = {i, currheighth};
        idx_height.push_back(temp);

        int sizer  =  idx_height.size();

        if (idx_height.size() >= 2 && currheighth < idx_height[idx_height.size() - 2][1])
        {
            int initalLimit = idx_height[idx_height.size() - 2][0];
            idx_height[idx_height.size() - 1][0] = initalLimit;

            // calculate the area that the other hight form
            int currwidth = i - initalLimit;
            int curcalucaltedheigh = idx_height[idx_height.size() - 2][1];

            // check if is forming by a scuare

            if (currwidth != curcalucaltedheigh)
            {
                maxarea = max((currwidth * curcalucaltedheigh), maxarea);
            }


            idx_height.erase(idx_height.begin()+(idx_height.size() - 2));
        }


    }

    for (int i = 0; i < idx_height.size() - 1; i++)
    {
        int w = idx_height[i + 1][0] - idx_height[i][0];
        int h = idx_height[i][1];

        // check if is a square
        if (w != h)
        {
            maxarea = max((h * w), maxarea);
        }
    }
    // chek the last element
    maxarea = ((idx_height[idx_height.size() - 1][1]), maxarea);
    return maxarea;
}

int main()
{
    vector<int> heights = {2, 1, 5, 6, 2, 3};

    cout << largestRectangleArea(heights);

    return 0;
}
