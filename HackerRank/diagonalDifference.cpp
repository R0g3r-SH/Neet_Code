#include <iostream>

#include <bits/stdc++.h>

int diagonalDifference(vector<vector<int>> arr)
{

    int w = arr[0].size() - 1;

    int d1 = 0;
    int d2 = 0;

    // calcualte the first diagonal

    for (int i = 0; i <= w; i++)
    {
        d1 += arr[i][i];
    }

    int row = 0 ; 

    for (int j = w; j >= 0; j--)
    {
        d2 += arr[row][j];
        row++;
    }

    return abs(d1 - d2);
}

int main()
{

    vector<vector<int>> arr = {
        {11, 2, 4},
        {4, 5, 6},
        {10, 8, -12}};
    cout << diagonalDifference(arr);

    return 0;
}