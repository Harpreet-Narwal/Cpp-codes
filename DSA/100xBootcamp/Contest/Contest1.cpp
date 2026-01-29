#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
    // int n;
    // cin>>n;

    // for(int i=1; i<=n; i++){
    //     cout<<"Hello Codeforces " << i<<endl;
    // }


    // char s;
    // cin>>s;

    // if(s == 'a' || s == 'e' || s== 'i' || s == 'o' || s=='u'){
    //     cout<<"YES";
    // }
    // else{
    //     cout<<"NO";
    // }
    // return 0;

    // int n;
    // cin>>n;

    // int temp = n;
    // temp = temp /10;
    // int ans = temp % 10;
    

    // cout<<ans<<endl;


    // int n;
    // cin>>n;

    // if(n % 100==0){
    //     if(n % 400 == 0){
    //         cout<<"Yes";
    //     }else{
    //         cout<<"No";
    //     }
    // }else if(n % 100 != 0){
    //     if(n % 4 == 0){
    //         cout<<"Yes";
    //     }else{
    //         cout<<"No";
    //     }
    // }

    // long long n;
    // cin>>n;

    // vector<long long> arr(n);

    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }

    // long long cnt = 0;
    // for(int i=0; i<arr.size(); i++){
    //     if(arr[i] == 0){
    //         cnt++;
    //         continue;
    //     }
    //     if(18 % arr[i] == 0){
    //         cnt++;
    //     }else if(arr[i] % 45 == 0){
    //         cnt++;
    //     }
    // }

    //cout<<cnt;

    // int n;
    // cin>>n;

    // for(int i=1; i<=n; i++){
    //     if(i % 3 == 0 && i % 5 == 0){
    //         cout<<"FizzBuzz"<<endl;
    //     }
    //     else if(i % 3 == 0){
    //         cout<<"Fizz"<<endl;
    //     }
    //     else if(i % 5 == 0){
    //         cout<<"Buzz"<<endl;
    //     }
    //     else{
    //         cout<<i<<endl;
    //     }
        
    // }

    // long long n;
    // cin>>n;
    // long long temp = n;
    // long long ans = 0;

    // if(n == 0){
    //     ans = 1;
    // }

    // while(temp > 0){
    //     int mod = temp % 10;
    //     if(mod == 0){
    //         ans++;
    //     }
    //     temp /= 10;
    // }

    // cout<<ans;

    // int n, m;

    // cin>>n>>m;

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++){
    //         if(i==0 || i == n-1 || j== 0 || j == m-1){
    //             cout<<"^";
    //         }else{
    //             cout<<" ";
    //         }
    //     }
    //     if(i<n-1){
    //         cout<<endl;
    //     }
    // }


    // int n;
    // cin>>n;

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<i; j++){
    //         cout<<" ";
    //     }
    //     for(int j=0; j<=i; j++){
    //         cout<<"x";
    //     }
    //     if(i<n-1){
    //         cout<<endl;
    //     }
    // }



    // int n;
    // cin>>n;

    // for(int i=n-1; i>=0; i--){
    //     for(int j=0; j<n-i-1; j++){
    //         cout<<" ";
    //     }
    //     for(int j=0; j<=i; j++){
    //         cout<<".";
    //         if(j<i){
    //             cout<<" ";
    //         }
    //     }
    //         cout<<endl;
    // }

    // for(int i=1; i<n; i++){
    //     for(int j=0; j<n-i-1; j++){
    //         cout<<" ";
    //     }
    //     for(int j=0; j<=i; j++){
    //         cout<<".";
    //         if(j<i){
    //             cout<<" ";
    //         }
    //     }
    //     if(i < n-1)
    //         cout<<endl;
    // }

    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++)
        {
            cout<<" ";
        }

        cout<<">";

        if(i > 0){
            for(int j=0; j<2*i-1; j++){
                cout<<" ";
            }
            cout<<">";
        }
        cout<<endl;
    }

        for(int i=n-2; i>=0; i--){
        for(int j=0; j<i; j++)
        {
            cout<<" ";
        }

        cout<<">";

        if(i > 0){
            for(int j=0; j<2*i-1; j++){
                cout<<" ";
            }
            cout<<">";
        }
        if(i > 0){
            cout<<endl;
        }
    }


    return 0;
}