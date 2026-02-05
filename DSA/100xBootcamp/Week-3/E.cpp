#include<bits/stdc++.h>
#include<iostream>

using ll = long long;
using namespace std;

ll fact(ll n){

    ll ans = 1;

    for(int i=1; i<=n; i++){
        ans *= i;
    }
    return ans;
}


int main(){
    ll n;
    cin>>n;

    cout<<fact(n);
    return 0;
}