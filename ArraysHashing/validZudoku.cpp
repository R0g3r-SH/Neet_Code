#include <iostream>
#include <bits/stdc++.h>

bool isValidSudoku(vector<vector<char>> &board)
{
    unordered_set<char> set;

    int rows = board.size();
    int cols = board[0].size();

    // rows
    for (vector<char> nums : board)
    {
        for (int num : nums)
        {
            if (num != '.')
            {
                if (set.count(num))
                {
                    return false;
                }
                else
                {
                    set.insert(num);
                }
            }
        }
        set.clear();
    }

    set.clear();
    // cols
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            if (board[j][i] != '.')
            {
                if (set.count(board[j][i]))
                {
                    return false;
                }
                else
                {
                    set.insert(board[j][i]);
                }
            }
        }
        set.clear();
    }

    // by scuare

    vector<std::vector<int>> v = {
        {1, 0},   // down
        {0, 1},   // right
        {-1, 0},  // up
        {0, -1},  // left
        {1, 1},   // down-right (diagonal)
        {-1, -1}, // up-left (diagonal)
        {1, -1},  // down-left (diagonal)
        {-1, 1}   // up-right (diagonal)
    };

    set.clear();

    int row = 1;

    for (int i = 1; i < 8; i += 3)
    {
        if (board[row][i] != '.')
        {
            set.insert(board[row][i]);
        }
        for (int j = 0; j < v.size(); j++)
        {

            int x = v[j][0];
            int y = v[j][1];

            if (board[row + x][i + y] != '.')
            {
                if (set.count(board[row + x][i + y]))
                {
                    return false;
                }
                else
                {
                    set.insert(board[row + x][i + y]);
                }
            }
        }

        set.clear();
    }
 row = 4;
     for (int i = 1; i < 8; i += 3)
    {
        if (board[row][i] != '.')
        {
            set.insert(board[row][i]);
        }
        for (int j = 0; j < v.size(); j++)
        {

            int x = v[j][0];
            int y = v[j][1];

            if (board[row + x][i + y] != '.')
            {
                if (set.count(board[row + x][i + y]))
                {
                    return false;
                }
                else
                {
                    set.insert(board[row + x][i + y]);
                }
            }
        }

        set.clear();
    }
row =7;
    for (int i = 1; i < 8; i += 3)
    {
        if (board[row][i] != '.')
        {
            set.insert(board[row][i]);
        }
        for (int j = 0; j < v.size(); j++)
        {

            int x = v[j][0];
            int y = v[j][1];

            if (board[row + x][i + y] != '.')
            {
                if (set.count(board[row + x][i + y]))
                {
                    return false;
                }
                else
                {
                    set.insert(board[row + x][i + y]);
                }
            }
        }

        set.clear();
    }

    return true;
}

int main()
{

    vector<std::vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

    cout << isValidSudoku(board);

    return 0;
}