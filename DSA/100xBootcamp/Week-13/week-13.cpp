#include<bits/stdc++.h>
using namespace std;

//A:  Factors of All Numbers:


int main(){
    int n;
    cin>>n;

    vector<vector<int>> factors(n+1);

    for(int i=1; i<= n; i++){
        for(int j = i; j <= n; j+= i){
            factors[j].push_back(i);
        }
    }


    for(int i=1; i<=n; i++){
        for(int j=0; j< factors[i].size(); j++){
            cout<< factors[i][j];
            if(j != factors[i].size() -1){
                cout<<" ";
            }
        }
        cout<<endl;
    }
}