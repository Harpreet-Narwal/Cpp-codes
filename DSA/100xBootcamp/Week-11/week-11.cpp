#include<bits/stdc++.h>
#include<iostream>

using namespace std;

typedef long long ll;


// A : Max Subarray Sum of Size K:

// int main(){

//     ll n, k;
//     cin>>n>>k;

//     vector<ll> arr(n);

//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     ll sum = 0;
//     for(int i=0; i<k; i++) sum += arr[i];

//     ll ans = sum;

//     for(int i=k; i<n; i++){
//         sum += arr[i];
//         sum -= arr[i-k];
//         ans = max(ans, sum);

//     }

//     cout<<ans<<"\n";
// }



// B : Count Vowels:

// bool containsVowels(char s){
//     char c = tolower(s);

//     if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
//         return true;
//     }
//     return false;
// }


// int main(){
//     ll n, k;
//     cin>>n>>k;

//     string s;
//     cin>>s;

//     int cntOfVowels = 0;

//     for(int i=0; i<k; i++){
//         if(containsVowels(s[i])){
//             cntOfVowels++;
//         }
//     }

//     cout<<cntOfVowels;

//     for(int i=k; i<n; i++){
//         if(containsVowels(s[i])) cntOfVowels++;
//         if(containsVowels(s[i-k])) cntOfVowels--;

//         cout<<" "<<cntOfVowels;
//     }

//     cout<<"\n";

// }


// C : Count Number of Distinct Integer:


// int main(){
//     ll n, k;
//     cin>>n>>k;

//     vector<ll> arr(n);
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     unordered_map<ll, ll> mpp;

//     for(int i=0; i<k; i++){
//         mpp[arr[i]]++;
//     }

//     cout<<mpp.size();

//     for(int i=k; i<n; i++){
//         mpp[arr[i]]++;
//         mpp[arr[i-k]]--;

//         if(mpp[arr[i-k]] == 0) mpp.erase(arr[i-k]);

//         cout<<" "<<mpp.size();
//     }
//     cout<<"\n";

// }


// D : Count Good Numbers:


int main(){
    ll n, m, k;
    cin>>n>>m>>k;

    vector<ll> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    unordered_set<ll> goodNumbers;
    for(int i=0; i<m; i++){
        ll x; cin>>x;
        goodNumbers.insert(x);
    }

    int cnt = 0;

    for(int i=0; i<k; i++){
        if(goodNumbers.count(arr[i])) cnt++;
    }

    cout<<cnt;

    for(int i=k; i<n; i++){
        if(goodNumbers.count(arr[i])) cnt++;
        if(goodNumbers.count(arr[i-k])) cnt--;

        cout<<" " << cnt;
    }
    cout<<"\n";
    return 0;
}   