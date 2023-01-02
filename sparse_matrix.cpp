#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> sparseMatrix(vector<vector<int>> matrix){
    vector<vector<int>> sparseMatrics;
    vector<int> col;
    vector<int> row;
    vector<int> value;
    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix[i].size(); j++){
            if( matrix[i][j] !=0){
                row.push_back(i + 1);
                col.push_back(j + 1);
                value.push_back(matrix[i][j]);
            }
        }
    }
    sparseMatrics.push_back(row);
    sparseMatrics.push_back(col);
    sparseMatrics.push_back(value);
    return sparseMatrics;
}

int main(){
    vector<vector<int>> matrix;
    auto rows = 0,col = 0;
    cout<<"Enter the no of rows and columns: - ";
    cin>>rows>>col;
    cout<<"The Matrix is"<<endl;
    for(auto i = 0; i <rows; i++){
        vector<int> row;
        for(auto j = 0; j < col; j++){
            int element;
            cin>>element;
            row.push_back(element);
        }
        matrix.push_back(row);
    }
    cout<<endl<<endl;
    cout<<"The sparse Matrix is"<<endl;
    auto sparseMatrics = sparseMatrix(matrix);
    for(int i = 0; i < sparseMatrics.size(); i++){
        for(auto j: sparseMatrics[i]){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
}