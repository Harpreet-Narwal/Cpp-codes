#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long ll;


// A : Search Queries

// int main(){
//     ll n, q;
//     cin>>n>>q;

//     vector<ll> arr(n);
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     while(q--){
//         ll x;
//         cin>>x;

//         ll left = 0, right = n-1;
//         int ind = -1;
//         while(left <= right){
//             ll mid = left + (right-left)/2;
//             if(arr[mid] == x){
//                 ind = mid + 1;
//                 break;
//             }
//             if(arr[mid] < x){
//                 left = mid+1;
//             }else{
//                 right = mid-1;
//             }
//         }

//         cout<<ind<<"\n";
//     }
// }

// B : Search Queries - II

// int main(){
//     ll n, q;
//     cin>>n>>q;

//     vector<ll> arr(n);
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     while(q--){
//         ll x;
//         cin>>x;

//         ll left = 0, right = n-1;
//         int ind = -1;
//         while(left <= right){
//             ll mid = left + (right-left)/2;
//             if(arr[mid] == x){
//                 ind = mid + 1;
//                 break;
//             }
//             if(arr[mid] > x){
//                 left = mid+1;
//             }else{
//                 right = mid-1;
//             }
//         }

//         cout<<ind<<"\n";
//     }
// }


// C: First and Last Occurence:

// int main(){
//     ll n, q;
//     cin>>n>>q;

//     vector<ll> arr(n);
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     while(q--){
//         ll x;
//         cin>>x;

//         ll start = 0, end = n-1;
//         ll sind = -1, eind = -1;

//         while(start <= end){
//             ll mid = start + (end - start)/2;
//             if(arr[mid] == x){
//                 sind = mid;
//                 end = mid-1;
//             }
//             else if(arr[mid] < x){
//                 start = mid+1;
//             }else{
//                 end = mid-1;
//             }
//        }

//        start = 0, end = n-1;
//        while(start <= end){
//             ll mid = start + (end - start) /2;
//             if(arr[mid] == x){
//                 eind =mid;
//                 start = mid+1;
//             }
//             if(arr[mid] > x){
//                 end = mid-1;
//             }else{
//                 start = mid+1;
//             }
//        }

//        if(sind == -1) cout<<-1<<"\n";
//        else{
//         cout<<sind + 1<<" "<< eind + 1<<"\n";
//        }
//     }
// }

// D: Frequency of Elements:

// int main(){
//     ll n, q;
//     cin>>n>>q;

//     vector<int> arr(n);
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     sort(arr.begin(), arr.end());

//     while(q--){
//         ll x;
//         cin>>x;
//         ll left = 0, right = n-1;
//         ll sind = -1;

//         while(right >= left){
//             ll mid = left + (right-left)/2;

//             if(arr[mid] == x){
//                 sind = mid;
//                 right = mid-1;
//             }
//             else if(arr[mid] < x){
//                 left = mid+1;
//             }
//             else{
//                 right = mid-1;
//             }
//         }

//         left = 0, right = n-1;
//         ll eind = -1;
//         while(right >= left){
//             ll mid = left + (right - left)/2;
            
//             if(arr[mid] == x){
//                 eind = mid;
//                 left = mid+1;
//             }
//             else if(arr[mid] > x){
//                 right = mid-1;
//             }else{
//                 left = mid+1;
//             }
//         } 

//         if(sind == -1) cout<<0<<"\n";
//         else{
//             cout<<eind - sind + 1 << "\n";
//         }

//     }

// }


// E : Frequency of Elements >= x;


// int main(){
//     ll n, q;
//     cin>>n>>q;

//     vector<int> arr(n);
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     sort(arr.begin(), arr.end());
//     while(q--){
//         ll x;
//         cin>>x;

//         ll left =0, right = n-1;
//         ll sind = n;

//         while(right >= left){
//             ll mid = left + (right - left)/2;

//             if(arr[mid] >= x){
//                 sind = mid;
//                 right = mid-1;
//             }else{
//                 left = mid+1;
//             }
//         }

//         cout<<n-sind<<"\n";
//     }
// }



// F : Frequency of Elements b/w X and Y:

// int main(){
//     ll n, q;
//     cin>>n>>q;

//     vector<int> arr(n);
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     sort(arr.begin(), arr.end());


//     while(q--){
//         ll x, y;
//         cin>>x>>y;
        
//         if(x > y) {cout<<0<<"\n"; continue;}

//         ll left =0, right = n-1;
//         ll sind = n;

//         while(right >= left){
//             ll mid = left + (right - left)/2;

//             if(arr[mid] >= x){
//                 sind = mid;
//                 right = mid-1;
//             }else{
//                 left = mid+1;
//             }
//         }

//         left = 0, right = n-1;
//         ll eind = -1;

//         while(left <= right){
//             ll mid = left + (right - left)/2;

//             if(arr[mid]<= y){
//                 eind = mid;
//                 left = mid+1;
//             }
//             else{
//                 right = mid-1;
//             }  
//         }
//         if(eind == -1 || sind == n || sind > eind) cout<<0<<"\n";
//         else cout<<eind-sind + 1<<"\n";
//     }
// }


// G : Smallest Element >= x;

// int main(){
//     ll n, q;
//     cin>>n>>q;

//     vector<ll> arr(n);
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     sort(arr.begin(), arr.end());

//     while(q--){
//         ll x;
//         cin>>x;

//         ll left = 0, right = n-1;
//         ll ans = n;

//         while(left <= right){
//             ll mid = left + (right-left)/2;

//             if(arr[mid] >= x){
//                 ans = mid;
//                 right = mid-1;
//             }
//             else{
//                 left = mid+1;
//             }
//         }
//         if(ans == n) cout<<-1<<"\n";
//         else{
//             cout<<arr[ans]<<"\n";
//         }
//     }
// }


// H: Largest Element <= X:

// int main(){
//     int n, q;
//     cin>>n>>q;

//     vector<int> arr(n);
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     sort(arr.begin(), arr.end());

//     while(q--){
//         ll x;
//         cin>>x;

//         int left = 0, right = n-1;
//         int ind = n;

//         while(left <= right){
//             int mid = left + (right-left)/2;
//             if(arr[mid] <= x){
//                 ind = mid;
//                 left = mid+1;
//             }else{
//                 right = mid-1;
//             }
//         }

//         if(ind == n) cout<<-1<<"\n";
//         else cout<<arr[ind]<<"\n";

//     }
// }

// I :  Aggressive Cows:

// bool canPlace(vector<ll> &arr, ll k, ll minDistance){

//     ll count = 1;
//     ll last = arr[0];

//     for(int i=1; i<arr.size(); i++){
//         if(arr[i] - last >= minDistance){
//             count++;
//             last = arr[i];
//         }
//         if(count == k) return true;
//     }
//     return false;

// }


// int main(){
//     ll n, k;
//     cin>>n>>k;

//     vector<ll> arr(n);

//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     sort(arr.begin(), arr.end());

//     ll low = 1, high = arr[n-1] - arr[0];
//     ll ans = 0;

//     while(low <= high){
//         ll mid = low + (high - low)/2;
//         if(canPlace(arr, k, mid)){
//             ans = mid;
//             low = mid+1;
//         }else{
//             high = mid-1;
//         }
//     }

//     cout<<ans<<endl;

// }


// J : Painter's Partition:

bool check(vector<ll> &arr, ll k, ll maxTime){

    ll cnt = 1;
    ll time = 0;

    for(int i=0; i< arr.size(); i++){
        if(arr[i] > maxTime) return false;

        if(time + arr[i] > maxTime){
            cnt++;
            time = arr[i];
        }else{
            time +=arr[i];
        }
    }

    return cnt <= k;

}

int main(){
    ll n, k;
    cin>>n>>k;

    if(k > n) {cout<<-1<<"\n"; return 0;}
    vector<ll> arr(n);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    ll low = *max_element(arr.begin(), arr.end());

    ll high = 0;
    for(auto it: arr) high += it;

    ll ans = high;

    while(low <= high){

        ll mid = low + (high - low)/2;

        if(check(arr, k, mid)){
            ans = mid;
            high = mid-1;
        }else{
            low = mid+1; 
        }

    }
    cout<<ans<<endl;

}