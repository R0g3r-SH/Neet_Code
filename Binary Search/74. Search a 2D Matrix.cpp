#include <iostream>
#include <bits/stdc++.h>

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int rows = matrix.size();
    int cols = matrix[0].size();

    int top = 0;
    int bot = rows - 1;

    // find the row to seach
    int row;

    while (top <= bot)
    {

        row = (top + bot) / 2;

        if (target > matrix[row][cols - 1])
            top = row + 1;
        else if (target < matrix[row][0])
            bot = row - 1;
        else
            break;
    }

    if (!(top <= bot))
    {
        return false;
    }
    row = (top + bot) / 2;
    vector<int> row1 = matrix[row];

    int l = 0;
    int r = row1.size() - 1;

    while (l <= r)
    {
        int m = (l + r) / 2;

        if (target < row1[m])
        {
            r = m - 1;
        }
        else if (target > row1[m])
        {
            l = m + 1;
        }
        else
        {
            return true;
        }
    }

    return false;
}
int main()
{

    vector<vector<int>> matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target = 3;

    searchMatrix(matrix, target);
}