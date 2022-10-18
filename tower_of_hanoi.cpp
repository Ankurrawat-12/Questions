#include<iostream>
#include<stack>

using namespace std;

void towerOfHanoi1(int, char, char, char);
void towerOfHanoi(int, int, stack<int>, stack<int>, stack<int>);

int main(){
    int plates;
    cin>>plates;
    // char startingPoint, endingPoint;
    // cin>>startingPoint;
    // cin>>endingPoint;
    // int startPlates[plates];
    stack<int> A;
    stack<int> B;
    stack<int> C;

    for(int i = 1; i <= plates; i++){
        A.push(i);
    }
    towerOfHanoi1(plates,'A','B','c');

    // if(startingPoint == 'A'){
    //     if(endingPoint == 'C'){
    //         towerOfHanoi(plates, startPlates, B[], C[])
    //     }
    //     else{
    //         towerOfHanoi(plates, startPlates, C[], B[])
    //     }
    // }
    // else if(startingPoint == 'B'){
    //     if(endingPoint == 'C'){
    //         towerOfHanoi(plates, startPlates,A[] , C[])
    //     }
    //     else{
    //         towerOfHanoi(plates, startPlates, C[], B[])
    //     }
    // }
    // if(startingPoint == 'A'){
    //     if(endingPoint == 'C'){
    //         towerOfHanoi(plates, startPlates, B[], C[])
    //     }
    //     else{
    //         towerOfHanoi(plates, startPlates, C[], B[])
    //     }
    // }

    // towerOfHanoi(plates, plates, A, B, C);
}

void towerOfHanoi1(int plate, char A, char B, char C){
    if(plate == 1){
        cout<<"Move 1 from "<<A<<" to "<<C<<endl;
        return;
    }
    towerOfHanoi1(plate -1, 'A', 'C', 'B');
    cout<<"Move "<<plate<<" from "<<A<<" to "<<C<<endl;
    towerOfHanoi1(plate-1,'B', 'A', 'C');
}


void towerOfHanoi(int size, int plate, stack<int> A, stack<int> B, stack<int> C){
    stack<int> temp;
    if(plate == 1){
        // cout<<"Move 1 from "<<A<<" to "<<C<<endl;
        C.push(A.top());
        A.pop();
        temp = A;
        cout<<"A :- ";
        for(int i = 0; i < size; i++){
            cout<<temp.top()<<" ";
            temp.pop();
        }
        cout<<"\tB :- ";
        temp = B;
        for(int i = 0; i < size; i++){
            cout<<temp.top()<<" ";
            temp.pop();
        }
        cout<<"\tC :- ";
        temp = C;
        for(int i = 0; i < size; i++){
            cout<<temp.top()<<" ";
            temp.pop();
        }
        cout<<endl;
        return;
    }
    towerOfHanoi(size, plate -1, A, C, B);
    // cout<<"Move "<<plate<<" from "<<A<<" to "<<C<<endl;
    C.push(A.top());
    A.pop();
    temp = A;
    cout<<"A :- ";
    for(int i = 0; i < size; i++){
        cout<<temp.top()<<" ";
        temp.pop();
    }
    cout<<"\tB :- ";
    temp = B;
    for(int i = 0; i < size; i++){
        cout<<temp.top()<<" ";
        temp.pop();
    }
    cout<<"\tC :- ";
    temp = C;
    for(int i = 0; i < size; i++){
        cout<<temp.top()<<" ";
        temp.pop();
    }
    cout<<endl;
    towerOfHanoi(size, plate-1, B, A, C);
}

// done basic