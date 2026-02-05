#include<bits/stdc++.h>
#include<iostream>

using ll = long long;
using namespace std;

ll fun(ll n){
    int cnt = 0;

    if(n ==0) return 1;

    while(n > 0){
        ll ans = n % 10;
        if(ans == 0){
            cnt++;
        }
        n /= 10;
    }
    return cnt;
}

int main(){

    ll n;
    cin>>n;

    cout<<fun(n);

    return 0;
    
}