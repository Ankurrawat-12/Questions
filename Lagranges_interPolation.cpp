#include<bits/stdc++.h>
using namespace std;
 
double interpolate(vector<vector<int>> f, int xi)
{
    double result = 0; // Initialize result
 
    for (int i=0; i<f.size(); i++)
    {
        double term = f[i][1];
        for (int j=0;j<f.size();j++)
        {
            if (j!=i)
                term *= (xi - f[j][0])/double(f[i][0] - f[j][0]);
        }
 
        result += term;
    }
 
    return result;
}
 
int main()
{
    int sizeOfTable;
    cin>>sizeOfTable;
    vector<vector<int>> f;

    for(int i = 0; i < sizeOfTable; i++){
        vector<int> row;
        for(int j = 0; j < 2; j++){
            int element;
            cin>>element;
            row.push_back(element);
        }
        f.push_back(row);
    }
    int valueOfX;
    cin>>valueOfX;

    cout << "Value of f("<<valueOfX<<") is : " << interpolate(f, valueOfX);
 
    return 0;
}