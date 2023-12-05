#include <iostream>
#include <vector>

using namespace std;

int trap(vector<int> &height)
{

    int total_area = 0;

    int lptr = 0;
    int rptr = height.size() - 1;
    int maxl = height[lptr];
    int maxr = height[rptr];

    while (lptr < rptr)
    {

        if (maxl <= maxr)
        {
            lptr++;
            maxl = max(maxl, height[lptr]);
            total_area += maxl - height[lptr];
        }else{
            rptr --;
            maxr = max( maxr,height[rptr]);
            total_area += maxr - height[rptr];
        }
    }

    return total_area;
}

int main()
{

    vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};

    cout << trap(height);

    return 0;
}