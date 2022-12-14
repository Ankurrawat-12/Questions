#include<bits/stdc++.h>

using namespace std;


//                                                                                  0    1    1      

//                                                                                  1    0    1     

//                                                                                  0    0    1    


vector<vector<int>> onesMinusZeros(vector<vector<int>> &grid)
{
    vector<vector<int>> diff;
    int size = 1;

    while (size !=  grid.size() * grid[0].size())
    {
        vector<int> rows;
        for (int i = 0; i < grid.size(); i++)
        {
            int onesRow = 0;
            int onesCol = 0;
            int zerosRow = 0;
            int zerosCol = 0;
            for (int row = 0; row < grid.size(); row++)
            {
                if (grid[row][i] == 1)
                {
                    onesCol++;
                }
                else
                {
                    zerosCol++;
                }
            }
            for (int col = 0; col < grid[0].size(); col++)
            {
                if (grid[i][col] == 1)
                {
                    onesRow++;
                }
                else
                {
                    zerosRow++;
                }
            }
            rows.push_back(onesRow + onesCol - zerosRow - zerosCol);
            size++;
        }
        diff.push_back(rows);
        
    }
    return diff;
}

int main()
{
    int i,j;
    cin>>i>>j;
    vector<vector<int>> grid;
    for (int row = 0; row < i; row++)
    {
        vector<int> rows;
        for (int column = 0; column < j; column++)
        {
            int element;
            cin >> element;
            rows.push_back(element);
        }
        grid.push_back(rows);
    }

    vector<vector<int>> diff = onesMinusZeros(grid);
    for(int t = 0; t < i; i++){
        for(int k = 0; k < j; k++){
            cout<<diff[t][k]<<" ";
        }
        cout<<endl;
    }
    
}