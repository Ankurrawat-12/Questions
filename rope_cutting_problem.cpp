#include<iostream>

using namespace std;

int ropeCutting(int , int, int, int);

int main(){
    int ropeLength, length1, length2, length3;
    cin>>ropeLength;
    cin>>length1;
    cin>>length2;
    cin>>length3;

    int cuts = ropeCutting(ropeLength, length1, length2, length3);
    cout<<cuts;
    return 0;
}

int ropeCutting(int ropeLength,int length1,int length2,int length3){
    if(ropeLength == 0){
        return 0;
    }
    if(ropeLength < 0){
        return -1;
    }

    int cuts = max(
        max(
            ropeCutting((ropeLength - length1), length1, length2, length3),
            ropeCutting((ropeLength - length2), length1, length2, length3)
        ),
        ropeCutting((ropeLength - length3), length1, length2, length3)
    );

    if(cuts == -1){
        return -1;
    }
    return cuts + 1;
}