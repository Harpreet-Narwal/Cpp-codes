#include<bits/stdc++.h>
#include<iostream>
#define ll long long

using namespace std;

void sol(){

    // int n;
    // cin>>n;

    // // int target = 0;
    // // cin>>target;



    // vector<int> arr(n);

    // // int zero = 0;
    // // int one = 0;
    // // int twos = 0;


    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    //     if(arr[i] == 1){
    //         one++;
    //     }else if(arr[i] == 0){
    //         zero++;
    //     }else{
    //         twos++;
    //     }
    // }

    // int target;
    // cin>>target;

    // int pass = 0;
    // int fail = 0;

    // for(int i=0; i<n; i++){
    //     if(arr[i] >= target){
    //         pass++;
    //     }else{
    //         fail++;
    //     }
    // }

    // cout<<"Pass: "<<pass<<endl;;
    // cout<<"Fail: "<<fail;

    // int mini = INT_MAX;
    // int ind = 0;
    // for(int i=0; i<n; i++){
    //     if(mini >= arr[i]){
    //         mini = arr[i];
    //         ind = i;
    //     }
    // }
    // cout<<ind + 1;

    // for(int i=0; i<twos; i++){
    //     cout<<2<<" ";
    // }

    // for(int i=0; i<one; i++){
    //     cout<<1<< " ";
    // }
    // for(int i=0; i<zero; i++){
    //     cout<<0<<" ";
    // }

}


vector<int> special(int n){
    vector<int> factors;

    // while(n > 0){
    //     int digit = n % 10;
    //     if(digit == 2 || digit == 7){
    //         factors.push_back(digit);
    //     }
    //     n /= 10;
    // }

    for(int i=1; i<=n; i++){
        if(n % i == 0){
            int digit = i % 10;
            if(digit == 7 || digit == 2){
                factors.push_back(i);
            }
        }
    }


    return factors;
}

bool almostPrime(int n){
    int cnt = 0;

    for(int i=1; i<=n; i++){
        if(n % i ==0){
            cnt++;
        }
    }

    if(cnt <=4) return true;
    else return false;
}

int main(){

    // ll n, m;
    // cin>>n>>m;

    // if(n == m){
    //     cout<<"Yes";
    // }else if(n ==0 && m == 1 || n == 1 && m == 0){
    //     cout<<"Yes";
    // }else{
    //     cout<<"No";
    // }

    ll n;
    cin>>n;

    // vector<int> arr(n);

    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }
    // bool flag = true;
    // for(int i=1; i<n; i++){
    //     if(arr[i] != arr[i-1]){
    //         flag = false;
    //         break;
    //     }
    // }

    // if(flag == true){
    //     cout<<"YES";

    // }else{
    //     cout<<"NO";
    // }


    // vector<int> arr = special(n);

    // if(arr.empty()){
    //     cout<<"-1";
    // }

    // for(int i=0; i<arr.size(); i++){
    //     cout<<arr[i]<<" ";
    // }

    // vector<int> arr(n);

    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }

    // int left = n/2 -1;
    // int right = n/2;

    // while(left >= 0 && right <n){
    //     cout<<arr[left]<<" ";
    //     cout<<arr[right]<<" ";
    //     left--;
    //     right++;
    // }


    // for(int i=1; i<= n; i++){
    //     if(almostPrime(i)){
    //         cout<<i<<" ";
    //     }
    // }


    vector<ll> arr(n);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }


    unordered_map<ll, int> mpp;

    for(auto it: arr){
        mpp[it]++;
    }

    for(auto it: arr){
        if(mpp[it] == 1){
            cout<<it<<" ";
        }
    }

    //vector<ll> ans;

    // for(auto it: mpp){
    //     if(it.second == 1){
    //         ans.push_back(it.first);
    //     }
    // }

    // sort(ans.begin(), ans.end());

    // for(ll i=0; i<ans.size(); i++){
    //     cout<<ans[i]<<" ";
    // }


}


// middle-left, middle-right
// 3        4       2       5    1 6
// n-1/2    n/2     n-2/2   
