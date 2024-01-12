#include <iostream>
#include <bits/stdc++.h>

using namespace std;
bool searchMatrix(vector<vector<int>> matrix, int target)
{
    int totalElem = matrix.size() * matrix[0].size();
    int emlperr = matrix[0].size();

    int row = matrix.size() - 1;
    int col = matrix[0].size() - 1;

    for (int i = 0; i < matrix.size(); i++)
    {
        vector<int> l = {i, 0};
        vector<int> r = {i, col};

        int curlval = matrix[l[0]][l[1]];
        int currval = matrix[r[0]][r[1]];

        if (curlval == target || currval == target)
        {
            return true;
        }

        else if (curlval < target && currval > target)
        {
            // do binary search here
            int bl = 0;
            int br = col;

            while (bl <= br)
            {
                int m = (bl + br) / 2;
                int cbv = matrix[i][m];
                if (cbv == target)
                {
                    return true;
                }
                else if (cbv > target)
                {
                    br = m - 1;
                }
                else
                {
                    bl = m + 1;
                }
            }
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target = 3;
    cout << searchMatrix(matrix, target);
    return 0;
}