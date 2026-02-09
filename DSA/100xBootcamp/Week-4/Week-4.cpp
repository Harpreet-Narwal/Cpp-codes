#include<iostream>
#include<bits/stdc++.h>
#define ll long long

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


// int main(){
//     ll n;
//     cin>>n;

//     vector<ll> arr(n);

//     for(ll i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     ll sum = 0;

//     for(ll i=0; i<n; i++){
//         sum += arr[i];
//     }

//     cout<<sum;

//     return 0;
// }


// C: Minimum Element and it's position

// int main(){
//     int n;
//     cin>>n;

//     vector<int> arr(n);

//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }   

//     int ind;
//     int mini = INT_MAX;
//     for(int i=0; i<n; i++){
//         if(mini > arr[i]){
//             mini = arr[i];
//             ind = i;
//         }
//     }

//     cout<<mini<<" "<<ind+1;


// }

// D: Maximum Element with Position:

// int main(){
//     int n;
//     cin>>n;

//     vector<int> arr(n);

//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }   

//     int ind;
//     int maxi = INT_MIN;
//     for(int i=0; i<n; i++){
//         if(maxi < arr[i]){
//             maxi = arr[i];
//             ind = i;
//         }
//     }

//     cout<<maxi<<" "<<ind+1;


// }

// E: Search Element in Array


// int main(){
//     int n, target;
//     cin>>n>>target;

//     vector<int> arr(n);

//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }   

//     bool ans = false;

//     for(int i=0; i<n; i++){
//         if(target == arr[i]){
//             ans = true;
//         }
//     }

//     if(ans == true){
//         cout<<"YES";
//     }else{
//         cout<<"NO";
//     }

// }

// F: Count Occurrence:

// int main(){
//     ll n, m;
//     cin>>n>>m;

//     vector<int> arr(n);

//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     int cnt =0;

//     for(int i=0; i<n; i++){
//         if(arr[i] == m){
//             cnt++;
//         }
//     }

//     cout<<cnt;

// }


// G: Check if Array is Sorted:



// int main(){
//     ll n;
//     cin>>n;

//     vector<ll> arr(n);

//     for(ll i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     bool flag = true;

//     for(int i=1; i<n; i++){
//         if(arr[i] < arr[i-1]){
//             flag = false;
//             break;
//         }
//     }

//     if(flag == true){
//         cout<<"YES";
//     }else{
//         cout<<"NO";
//     }

// }


// H: Count 0's and 1's and sort them

// int main(){
//     ll t;
//     cin>>t;
//     for(int i=0; i<t; i++){
//         ll n;
//         cin>>n;
        
//         vector<ll> arr(n);

//         int zeros = 0;
//         int ones = 0;

//         for(ll i=0; i<n; i++){
//             cin>>arr[i];
//             if(arr[i] == 0){
//                 zeros++;
//             }else{
//                 ones++;
//             }
//         }

//         for(int i=0; i<zeros; i++){
//             cout<<0<<" ";
//         }
//         for(int i=0; i<ones; i++){
//             cout<<1<<" ";
//         }
//         cout<<endl;
//     }
    
// }

// I: Reverse


int main(){
    ll n;
    cin>>n;

    vector<ll> arr(n);

    for(ll i=0; i<n; i++){
        cin>>arr[i];
    }

    

}