#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

// A: Count Distinct:

// int main(){
//     int n;
//     cin>>n;

//     vector<int> arr(n);
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     unordered_set<int> st;
//     for(int it : arr){
//         st.insert(it);
//     }

//     cout<<st.size()<<endl;

//     return 0;

// }


// B: Search Queries - III:

// int main(){
//     int n, q;
//     cin>>n>>q;
    
//     vector<int> arr(n);
//     unordered_map<int, int> mpp;

//     for(int i=0; i<n ;i++){
//         cin>>arr[i];
//     }

//     for(int i=0; i<n; i++){
//         mpp.insert({arr[i], i+1});
//     }

//     while(q--){
//         int a;
//         cin>>a;
//         auto it = mpp.find(a);
//         if(it != mpp.end()){
//             cout<<it->second<<"\n";
//         }else{
//             cout<<-1<<"\n";
//         }
//     }

// }


// C: Count Distinct Queries:

// int main(){
//     int n;
//     cin>>n;

//     unordered_map<int, int> mpp;

//     while(n--){
//         int n;
//         cin>>n;

//         if(n == 1){
//             int x;
//             cin>>x;
//             mpp[x]++;
//         }

//         if(n==2){
//             int x;
//             cin>>x;
//             mpp.erase(x);
//         }

//         if(n==3){
//             cout<<mpp.size()<<"\n";
//         }

//         if(n == 4){
//             int x;
//             cin>>x;
//             if(mpp.find(x) != mpp.end()){
//                 cout<<"YES"<<"\n";
//             }else{
//                 cout<<"NO"<<"\n";
//             }
//         }

//     }
// }


// D: Count Distinct Queries-II
// int main(){
//     int n;
//     cin>>n;

//     unordered_map<int, int> mpp;

//     while(n--){
//         int n;
//         cin>>n;

//         if(n == 1){
//             int x;
//             cin>>x;
//             mpp[x]++;
//         }

//         if(n==2){
//             int x;
//             cin>>x;
//             if(mpp.find(x) != mpp.end()){
//                 mpp[x]--;
//                 if(mpp[x] == 0){
//                     mpp.erase(x);
//                 }
//             }
//         }

//         if(n==3){
//             cout<<mpp.size()<<"\n";
//         }

//         if(n == 4){
//             int x;
//             cin>>x;
//             if(mpp.find(x) != mpp.end()){
//                 cout<<"YES"<<"\n";
//             }else{
//                 cout<<"NO"<<"\n";
//             }
//         }

//     }
// }


// E: Union Of Two Arrays:

// int main(){
//     int n;
//     cin>>n;

//     set<int> st;

//     for(int i=0; i<n; i++){
//         int x;
//         cin>>x;
//         st.insert(x);
//     }

//     int m;
//     cin>>m;

//     for(int i=0; i<m; i++){
//         int x;
//         cin>>x;
//         st.insert(x);
//     }

//     cout<<st.size()<<endl;

//     for(auto it: st){
//         cout<<it<<" ";
//     }

// }


// F : Intersection of Two Arrays:

// int main(){
//     int n;
//     cin>>n;

//     set<int> st;

//     for(int i=0; i<n; i++){
//         int x;
//         cin>>x;
//         st.insert(x);
//     }

//     int m;
//     cin>>m;
//     set<int> result;
//     for(int i=0; i<m; i++){
//         int x;
//         cin>>x;
//         if(st.count(x)){
//             result.insert(x);
//         }
//     }

//     cout<<result.size()<<"\n";

//     for(auto it: result){
//         cout<<it<<" ";
//     }

// }


// G: Intersection of Two Array - II:

// int main(){
//     int n;
//     cin>>n;

//     map<int, int> mppA;

//     for(int i=0; i<n; i++){
//         int x; cin>>x;
//         mppA[x]++;
//     }

//     int m;
//     cin>>m;

//     map<int, int> mppB;
//     for(int i=0; i<m; i++){
//         int x;
//         cin>>x;
//         mppB[x]++;
//     }

//     vector<int> result;
//     for(auto it: mppA){
//         int val = it.first;
//         int cnt = min(mppA[val], mppB[val]);
//         for(int i=0; i<cnt; i++){
//             result.push_back(val);
//         }
//     }

//     cout<<result.size()<<"\n";
//     for(int x : result){
//         cout<<x<<" ";
//     }
// }


// H: Two Sum - I

// int main(){
//     int n;
//     ll x;
//     cin>>n>>x;

//     unordered_map<ll, int> mpp;

//     for(int i=0; i<n; i++){
//         ll a;
//         cin>>a;
//         mpp[a]++;
//     }


//     for(auto it: mpp){
//         ll complement = x - it.first;
//         if(mpp.find(complement) != mpp.end()){
//             if(complement == it.first && it.second < 2) continue;
//             cout<<"TRUE";
//             return 0;
//         }
//     }

//     cout<<"FALSE";
    
// }

// I : Two Sum - II

// int main(){
//     int n;
//     ll x;
//     cin>>n>>x;

//     unordered_map<ll, int> mpp;


//     for(int i=1; i<=n; i++){
//         ll a;
//         cin>>a;

//         ll complement = x - a;

//         if(mpp.find(complement) != mpp.end()){
//             cout<<mpp[complement]<<" "<< i;
//             return 0;
//         }
//         mpp[a] = i;
//     }

//     cout<< -1;


// }


// J : Two Sum  - III

int main(){
    int n;
    ll x;
    cin>>n>>x;

    unordered_map<ll, ll> mpp;

    for(int i=1; i<=n; i++){
        ll a;
        cin>>a;
        mpp[a]++;
    }

    ll cnt = 0;
    for(auto it: mpp){
        ll complement = x - it.first;
        if(mpp.find(complement) != mpp.end()){
            if(complement == it.first){
                cnt += it.second * (it.second-1)/2;
            }else if(complement > it.first){
                 cnt += it.second * mpp[complement];
            }
        }
    }

    cout<<cnt;
    return 0;
}