#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// Question A: Reverse the Array:

// int main(){

//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     for(int i=n-1; i>= 0; i--){
//         cout<<arr[i]<<" ";
//     }
// }


// B: Sum of Array

#define ll long long

int main(){
    ll n;
    cin>>n;

    vector<ll> arr(n);

    for(ll i=0; i<n; i++){
        cin>>arr[i];
    }

    ll sum = 0;

    for(ll i=0; i<n; i++){
        sum += arr[i];
    }

    cout<<sum;

    return 0;
}