#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
    // A and B
    // int n;
    // cin>>n;
    // for(int i=n; i>=1; i--){
    //     cout<<i<<" ";
    // }

    // C
    // int n;
    // cin>>n;
    // for(int i=1; i<=n; i++){
    //     if(i % 2 == 0) cout<<i<<" ";
    // }

    // D
    // int l, r;
    // cin>>l>>r;
    // E
    // for(char i='A'; i<= 'Z'; i++){
    //     cout<<i<<" ";
    // }

    // F

    // int n;
    // cin>>n;

    // for(int i=1; i<=10; i++){
    //     cout<<n <<" * "<< i << " = " << n*i<<endl;
    // }


    // G
    // int n;
    // cin>>n;
    
    // vector<int> ans(n);
    // for(int i=0; i<n; i++){
    //     cin>>ans[i];
    // }

    // int positive=0,negative=0, even=0, odd = 0;

    // for(int i=0; i<n; i++){
    //     if(ans[i] > 0) positive++;
    //     if(ans[i] < 0) negative++;
    //     if(ans[i] % 2 == 0) even++;
    //     else odd++;
    // }

    // cout<<positive<<endl;
    // cout<<negative<<endl;
    // cout<<even<<endl;
    // cout<<odd<<endl;
    

    // H

    // long long n;
    // cin>>n;

    // long long sum = n * (n+1)/2;

    // cout<<sum;

    // I

    // long long n;
    // cin>>n;
    // long long ans = 1;

    // for(int i=1; i<=n ;i++){
    //     ans *= i;
    // }

    // cout<<ans;

    // J

    // long long x, n;
    // cin>>x>>n;

    // long long ans = 1;

    // for(int i=1; i<=n; i++){
    //     ans *= x;
    // }

    // cout<<ans;

    // K

    // int n;
    // cin>>n;
    // int ans = 0;

    // int temp = n;
    // int trailingZero = 0;

    // while(temp % 10 == 0 && temp != 0){
    //     trailingZero++;
    //     temp /= 10;
    // }

    // while(n > 0){
    //     ans = (n % 10) + (ans * 10);
    //     n /= 10;
    // }

    // for(int i=0; i<trailingZero; i++){
    //     cout<<0;
    // }

    // cout<<ans;


    // string s;
    // cin>> s;

    // reverse(s.begin(), s.end());

    // cout<<s;

    // L

    // long long n;
    // cin>>n;

    // int ans = 0;

    // while(n > 0){
    //     ans += n%10;
    //     n /= 10;
    // }

    // cout<<ans;


    // M & N

    long long n;
    cin>>n;
    long long temp = n;
    long long ans = 0;

    while(temp> 0){
        ans = (temp % 10) + (ans * 10);
        temp /= 10;
    }
    if(n == ans) cout<<"YES"<<endl;
    else cout<< "NO"<<endl;


    return 0;
}
