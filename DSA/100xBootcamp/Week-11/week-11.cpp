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

bool containsVowels(char s){
    char c = tolower(s);

    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        return true;
    }
    return false;
}


int main(){
    ll n, k;
    cin>>n>>k;

    string s;
    cin>>s;

    int cntOfVowels = 0;

    for(int i=0; i<k; i++){
        if(containsVowels(s[i])){
            cntOfVowels++;
        }
    }

    cout<<cntOfVowels;

    for(int i=k; i<n; i++){
        if(containsVowels(s[i])) cntOfVowels++;
        if(containsVowels(s[i-k])) cntOfVowels--;

        cout<<" "<<cntOfVowels;
    }

    cout<<"\n";

}