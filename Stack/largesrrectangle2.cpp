#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int largestRectangleArea(vector<int> heights)
{
    stack<pair<int, int>> idxArea;

    int maxArea = 0;

    for (int i = 0; i < heights.size(); i++)
    {
        int start = i;
        int h = heights[i];

        while (idxArea.size() > 0 && idxArea.top().second > h)
        {
            int currIdx = idxArea.top().first;
            int currHeight = idxArea.top().second;

            maxArea = max(maxArea, currHeight * (i - currIdx));
            start = currIdx;
            idxArea.pop();
        }

        idxArea.push({start, h});
    }

    while (!idxArea.empty())
    {
        int idxs = idxArea.top().first;
        int hs = idxArea.top().second;
        int sizeh = heights.size();

        maxArea = max(maxArea, hs * (sizeh - idxs));
        idxArea.pop();
    }

    return maxArea;
}

int main()
{
    vector<int> heights = {2, 1, 5, 6, 2, 3};

    cout << largestRectangleArea(heights);

    return 0;
}
