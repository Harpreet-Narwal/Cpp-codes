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

int main(){
    ll n, q;
    cin>>n>>q;

    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());


    while(q--){
        ll x, y;
        cin>>x>>y;
        
        if(x > y) {cout<<0<<"\n"; continue;}

        ll left =0, right = n-1;
        ll sind = n;

        while(right >= left){
            ll mid = left + (right - left)/2;

            if(arr[mid] >= x){
                sind = mid;
                right = mid-1;
            }else{
                left = mid+1;
            }
        }

        left = 0, right = n-1;
        ll eind = -1;

        while(left <= right){
            ll mid = left + (right - left)/2;

            if(arr[mid]<= y){
                eind = mid;
                left = mid+1;
            }
            else{
                right = mid-1;
            }  
        }
        if(eind == -1 || sind == n || sind > eind) cout<<0<<"\n";
        else cout<<eind-sind + 1<<"\n";
    }
}