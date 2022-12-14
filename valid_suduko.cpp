#include <bits/stdc++.h>

using namespace std;

//                                                                                          S    U    D    O    K   U

//                                                                                  5    3    .    .    7    .    .    .    .

//                                                                                  6    .    .    1    9    5    .    .    .

//                                                                                  .    9    8    .    .    .    .    6    .

//                                                                                  8    .    .    .    6    .    .    .    3

//                                                                                  4    .    .    8    .    3    .    .    1

//                                                                                  7    .    .    .    6    .    .    .    6

//                                                                                  .    6    .    .    .    .    2    8    .

//                                                                                  .    .    .    4    1    9    .    .    5

//                                                                                  .    .    .    .    8    .    .    7    9

bool checkBlock(vector<vector<char>> &board, int BRN, int BCN)
{
    for (int constantRow = 3 * BRN - 3; constantRow < 3 * BRN; constantRow++)
    {
        for (int constantColumn = 3 * BCN - 3; constantColumn < 3 * BCN; constantColumn++)
        {
            if (board[constantRow][constantColumn] == '.')
                continue;
            for (int row = 3 * BRN - 3; row < 3 * BRN; row++)
            {
                for (int column = 3 * BCN - 3; column < 3 * BCN; column++)
                {
                    if (row != constantRow || column != constantColumn)
                    {
                        if (board[constantRow][constantColumn] == board[row][column])
                        {
                            return false;
                        }
                    }
                }
            }
        }
    }
    return true;
}

bool isValidSudoku(vector<vector<char>> &board)
{
    // row check
    for (int row = 0; row < 9; row++)
    {
        for (int constant = 0; constant < 9; constant++)
        {
            if (board[row][constant] == '.')
                continue;
            for (int column = constant + 1; column < 9; column++)
            {
                if (board[row][constant] == board[row][column])
                {
                    return false;
                }
            }
        }
    }
    // column check
    for (int column = 0; column < 9; column++)
    {
        for (int constant = 0; constant < 9; constant++)
        {
            if (board[constant][column] == '.')
                continue;
            for (int row = constant + 1; row < 9; row++)
            {
                if (board[constant][column] == board[row][column])
                {
                    return false;
                }
            }
        }
    }

    for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            if (!(checkBlock(board, i, j)))
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    vector<vector<char>> suduko;
    for (int row = 0; row < 9; row++)
    {
        vector<char> rows;
        for (int column = 0; column < 9; column++)
        {
            char element;
            cin >> element;
            rows.push_back(element);
        }
        suduko.push_back(rows);
    }

    if (isValidSudoku(suduko))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}