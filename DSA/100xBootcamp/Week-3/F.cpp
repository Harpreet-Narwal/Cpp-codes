#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int fact(int n){
    if(n <= 0) return 1;

    return n * fact(n-1);
}


int main(){
    int n,r;
    cin>>n>>r;

    int nFact = fact(n);
    int rFact = fact(r);
    int nMinRFact = fact(n-r);

    cout<<nFact / (rFact * nMinRFact);
    return 0;
}