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


// int main(){
//     ll n, m, k;
//     cin>>n>>m>>k;

//     vector<ll> arr(n);
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     unordered_set<ll> goodNumbers;
//     for(int i=0; i<m; i++){
//         ll x; cin>>x;
//         goodNumbers.insert(x);
//     }

//     int cnt = 0;

//     for(int i=0; i<k; i++){
//         if(goodNumbers.count(arr[i])) cnt++;
//     }

//     cout<<cnt;

//     for(int i=k; i<n; i++){
//         if(goodNumbers.count(arr[i])) cnt++;
//         if(goodNumbers.count(arr[i-k])) cnt--;

//         cout<<" " << cnt;
//     }
//     cout<<"\n";
//     return 0;
// }   


// E : Longest Subarray with Sum < k:

// int main(){
//     ll n, k;
//     cin>>n>>k;

//     vector<ll> arr(n);
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     int left = 0, maxlen = 0;
//     ll sum = 0;

//     for(int i=0; i<n; i++){
//         sum += arr[i];
//         if(sum >= k){
//             sum -= arr[left];
//             left++;
//         }
//         maxlen = max(maxlen, i-left + 1);
//     }

//     cout<<maxlen;

// }


// F : Longest Substring without repeating characters:

// int main(){
//     int n;
//     cin>>n;
//     string s;
//     cin>>s;


//     unordered_map<char, int> mpp;

//     int left = 0, maxLen = 0;

//     // for(int i=0; i<n; i++){
//     //     if(mpp.find(s[i]) != mpp.end() && mpp[s[i]] >= left){
//     //         left = mpp[s[i]] + 1;
//     //     }
//     //     mpp[s[i]] = i;
//     //     maxLen = max(maxLen, i-left + 1);
//     // }

//     for(int right = 0; right < n; right++){
//         mpp[s[right]]++;
//         while(mpp[s[right]] > 1){
//             mpp[s[left]]--;
//             left++;
//         }
//         maxLen = max(maxLen, right-left + 1);
//     }

//     cout<<maxLen;

// }

// G: Longest Substring with At most K distinct Characters

// int main(){
//     int n, k;
//     cin>>n>>k;
//     string s;
//     cin>>s;

//     unordered_map<char, int> mpp;
//     int left = 0, maxLen = 0;

//     for(int right = 0; right < n; right++){
//         mpp[s[right]]++;
//         if(mpp.size() > k){
//             mpp[s[left]]--;
//             if(mpp[s[left]] == 0){
//                 mpp.erase(s[left]);
//             }
//             left++;
//         }
//         maxLen = max(maxLen, right-left + 1);
//     }

//     cout<<maxLen;
// }

// H : Count Subarray with Sum < K:

// int main(){
//     ll n, k;
//     cin>>n>>k;

//     vector<ll> arr(n);
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     int left = 0;
//     ll sum =0, cnt = 0;

//     for(int right = 0; right < n; right++){
//         sum += arr[right];

//         while(sum >= k){
//             sum -= arr[left];
//             left++;
//         }
//         cnt += right-left + 1;
//     }

//     cout<<cnt;

// }


// I : Count Subarrays with At most K distinct

// int main(){
//     ll n, k;
//     cin>>n>>k;

//     vector<int> arr(n);

//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     unordered_map<int, int> mpp;
//     ll left = 0, maxLen = 0;

//     for(int i=0; i<n; i++){
//         mpp[arr[i]]++;
//         while(mpp.size() > k){
//             mpp[arr[left]]--;
//             if(mpp[arr[left]] == 0) mpp.erase(arr[left]);
//             left++;
//         }
//         maxLen +=  i-left+1;
//     }

//     cout<<maxLen;
// }


// J : Smallest Subarray with Sum > K

int main(){
    ll n, k;
    cin>>n>>k;

    vector<ll> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int ans = INT_MAX;
    ll sum = 0;
    int left = 0;

    for(int right=0; right<n; right++){
        sum += arr[right];

        while(sum > k){
            ans = min(ans,right-left+1);
            sum -= arr[left];
            left++;
        }
    }

    cout<<(ans == INT_MAX ? -1 : ans);
}