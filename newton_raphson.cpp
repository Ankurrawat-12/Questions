#include<bits/stdc++.h>

using namespace std;
double func(double x)
{
    return x*x*x - x*x + 2;
}
 
double derivFunc(double x)
{
    return 3*x*x - 2*x;
}
 
void newtonRaphson(double x ,double error)
{
    double h = func(x) / derivFunc(x);
    int i = 1;
    while (abs(h) >= error)
    {
        h = func(x)/derivFunc(x);
  
        x = x - h;
        cout<<"Iteration :- "<<i++<<" x"<<i<<" = "<<x<<endl;
    }
 
    cout << "The value of the root is : " << x;
}
 
int main()
{
    double x0, error;
    cin>>x0>>error;
    newtonRaphson(x0, error);
    return 0;
}