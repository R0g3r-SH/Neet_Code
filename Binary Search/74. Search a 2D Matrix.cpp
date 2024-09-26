#include <iostream>
#include <bits/stdc++.h>

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int rows = matrix.size();
    int cols = matrix[0].size();

    int top = 0 ;

    int bot =rows - 1;

    while (top <= bot){
        int row = (top+bot)/2;

        if (target > matrix[row][matrix[row].size()-1]){
            top = row +1;
        }if (target < matrix[row][matrix[row].size()-1]){
            bot = row -1;
        }else{
            break;
        }
    }

    if (!(top<=bot)){
        return false;
    }



}

int main()
{
    return 0;
}