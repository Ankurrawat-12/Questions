#include<iostream>
#include<string>

using namespace std;

int main(){
    int length;
    cin>>length;
    string domains[length];

    for(int i = 0; i < domains.size(); i++){
        getline(cin ,domains[i]);
    }

    for(int i = 0; i < domains.size(); i++){
        cout<<domains[i]<<endl;
    }
    string domain_answer[length * 5];
    bool run = true;
    while(run){
        for(int i = 0; i < domains.size(); i++){
            for(int j = domains[i].size(); j > 0; j--){
                if (domains[i][j] == ".")
                {
                    domain_answer[i] = domains[j: ];
                }
                if( domains[i][j] == " "){
                    continue;;
                }
            }
            if(i == (domains->size() -1)){
                run = false;
            }
        }
    }
    
    for(int i = 0; i < domains->size(); i++){
        cout<<domain_answer[i]<<endl;
    }
}