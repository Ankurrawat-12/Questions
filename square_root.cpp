#include <iostream>
#include <cmath>

using namespace std;

int binarySearchSqrt(int toFind)
{
    int low = 0;
    int high = toFind / 2;
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int midSquare = mid * mid;
        if (midSquare == toFind)
        {
            return mid;
        } 
        else if (midSquare > toFind)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
            ans = mid;
        }
    }
    return ans;
}

int main()
{
    int toFind;
    cin >> toFind;

    cout<<binarySearchSqrt(toFind);
}