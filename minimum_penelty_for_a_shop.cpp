#include <bits/stdc++.h>

using namespace std;

int bestClosingTime(string customers)
{
    int closingHour = 0;
    int leastPenelty = INT_MAX;

    for (int i = 0; i <= customers.size(); i++)
    {
        int penelty = 0;
        for (int j = 0; j < customers.size(); j++)
        {
            if ((customers[j] == 'Y') && (i <= j))
            {
                penelty += 1;
            }
            if ((customers[j] == 'N') && (i > j))
            {
                penelty += 1;
            }
        }
        if (leastPenelty > penelty)
        {
            leastPenelty = penelty;
            closingHour = i;
        }
    }
    return closingHour;
}

int main(){
    string s;
    cin>>s;
    cout<<bestClosingTime(s);
}