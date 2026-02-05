#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void fact(int n){

    for(int i=n; i>=1; i--){
        if(n % i == 0){
            cout<<i<<" ";
        }
    }

}

int main(){
    int n;
    cin>>n;

    fact(n);

    return 0;
}