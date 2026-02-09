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


// int main(){
//     ll n;
//     cin>>n;

//     vector<ll> arr(n);

//     for(ll i=0; i<n; i++){
//         cin>>arr[i];
//     }


//     for(int i=0; i<(n/2); i++){
//         swap(arr[i], arr[n-i-1]);
//     }

//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
    

// }

// J: Arrange The Number:

// int main(){

//     int t;
//     cin>>t;

//     for(int i=0; i<t; i++){

//         ll n;
//         cin>>n;

//         vector<ll> arr;

//         for(int i=1; i<=n; i++){
//             if(i%2 != 0){
//                 arr.push_back(i);
//             }
//         }

//         for(int i=n; i>=2; i--){
//             if(i % 2 == 0){
//                 arr.push_back(i);
//             }
//         }

//         for(int i=0; i<n; i++){
//             cout<<arr[i]<<" ";
//         }

//         cout<<endl;
//     }


// }


// K: Swap Alternate:



// int main(){

//     int t;
//     cin>>t;

//     for(int i=0; i<t; i++){

//         ll n;
//         cin>>n;

//         vector<ll> arr(n);

//         for(int i=0; i<n; i++){
//             cin>>arr[i];
//         }

//         for(int i=1; i<n; i+=2){
//             swap(arr[i], arr[i-1]);
//         }


//         for(int i=0; i<n; i++){
//             cout<<arr[i]<< " ";
//         }

//         cout<<endl;
//     }
// }


// L: Missing Number:

// int main(){

//     int t;
//     cin>>t;

//     for(int i=0; i<t; i++){

//         ll n;
//         cin>>n;

//         vector<ll> arr(n);

//         for(int i=0; i<n; i++){
//             cin>>arr[i];
//         }

//         unordered_map<int, int> mpp;

//         for(auto it: arr){
//             mpp[it]++;
//         }

//         for(auto it: mpp){
//             if(it.second == 1){
//                 cout<<it.first;
//             }
//         }

//         cout<<endl;

//     }
// }


// M: Find Duplicate Number:


// int main(){

//     int t;
//     cin>>t;

//     for(int i=0; i<t; i++){

//         ll n;
//         cin>>n;

//         vector<ll> arr(n);

//         for(int i=0; i<n; i++){
//             cin>>arr[i];
//         }

//         unordered_map<int, int> mpp;

//         for(auto it: arr){
//             mpp[it]++;
//         }

//         for(auto it: mpp){
//             if(it.second == 2){
//                 cout<<it.first;
//             }
//         }

//         cout<<endl;

//     }
// }


// N: Intersection Of Array

// int main(){

//     int t;
//     cin>>t;

//     while(t--){

//         ll n,m;
//         cin>>n;
//         vector<int> arr1(n);
        
//         for(int i=0; i<n; i++){
//             cin>>arr1[i];
//         }

//         cin>>m;
//         vector<int> arr2(m);
//         for(int i=0; i<m; i++){
//             cin>>arr2[i];
//         }

//         vector<bool> used(m, false);

//         for(int i=0; i<n; i++){
//             for(int j=0; j<m; j++){
//                 if(arr1[i] == arr2[j] && !used[j]){
//                     cout<<arr1[i]<<" ";
//                     used[j] = true;
//                     break;
//                 }
//             }
//         }
//         cout<<endl;
//     }

// }


// O: Pair Sum:

int main(){

    int t;
    cin>>t;

    while(t--){

        ll n,m;
        cin>>n;
        vector<int> arr(n);
        
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        int target;
        cin>>target;

        unordered_map<int, ll> mpp;

        for(int i=0; i<n; i++){
            mpp[arr[i]]++;
        }

        ll count = 0;

        for(auto it: mpp){
            int num = it.first;
            int sum = target-num;

            if(mpp.find(sum) != mpp.end()){
                if(num == sum){
                    count += (it.second * (it.second-1))/2;
                }else if(num < sum){
                    count += it.second * mpp[sum];
                }
            }
        }

        cout<< count <<endl;

    }
}