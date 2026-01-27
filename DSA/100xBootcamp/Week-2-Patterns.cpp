#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
    // A
    // int n;
    // cin>>n;

    // for(int i=0; i<n; i++){
    //     cout<<"**"<<endl;
    // }
    // return 0;

 
    //B

    // int n, m;

    // cin>>n>>m;

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    //C

    // int n;

    // cin>>n;

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<=i; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }


    // D

    // int n;

    // cin>>n;

    // for(int i=0; i<n; i++){
    //     for(int j=n-1; j>=i; j--){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }



    // E
    // int n;

    // cin>>n;

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }



    //F

    // int n;
    // cin>>n;

    // for(int i=0; i<n; i++){
    //     cout<<"*";
    // }
    // cout<<endl;

    // for(int i=1; i<n-1; i++){
    //     for(int j=0; j<n; j++){
    //         if(j == 0 || j == n-1) cout<<"*";
    //         else cout<<" ";
    //     }
    //     cout<<endl;
    // }
    // if(n > 1){
    //     for(int i=0; i<n; i++){
    //         cout<<"*";
    //     }
    // }

    // G


    // int n, m;
    // cin>>n>>m;

    // for(int i=0; i<m; i++){
    //     cout<<"*";
    // }
    // cout<<endl;

    // for(int i=1; i<n-1; i++){
    //     for(int j=0; j<m; j++){
    //         if(j == 0 || j == m-1) cout<<"*";
    //         else cout<<" ";
    //     }
    //     cout<<endl;
    // }
    // if(n > 1){
    //     for(int i=0; i<m; i++){
    //         cout<<"*";
    //     }
    // }

    // P

    // int n;
    // cin>>n;


    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<i;
    //     }
    //     cout<<endl;
    // }

    // Q
    // int n;
    // cin>>n;
    

    
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){

    //         if((i + j) % 2 == 0){
    //             cout<<"0";
    //         }else{
    //             cout<<"1";
    //         }
    //     }
    //     cout<<endl;
    //}


    // L: TRIANGLE:


    // int n;
    // cin>>n;

    // for(int i=1; i<=n; i++){
    //     for(int j=0; j<n-i; j++){
    //         cout<<" ";
    //     }
    //     for(int j=1; j<=i; j++){
    //         cout<<"*";
    //         if(j < i) cout<<" ";
    //     }
    //     cout<<endl;
    // }   



    // J: VERTICAL TRIANGLE

    // int n;
    // cin>>n;

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<= i; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // for(int i=n-2; i>=0; i--){
    //     for(int j=0; j<=i; j++){
    //         cout<<"* ";
    //     }
    //     if(i>0){
    //         cout<<endl;
    //     }
    // }

    // K: Hollow Vertical Triangle

    // int n;
    // cin>>n;

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<= i; j++){
    //         if(j==0 || j== i){
    //             cout<<"* ";
    //         }else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // for(int i=n-2; i>=0; i--){
    //     for(int j=0; j<=i; j++){
    //         if(j==0 || j==i){
    //             cout<<"* ";
    //         }else{
    //             cout<<"  ";
    //         }
    //     }
    //     if(i>0){
    //         cout<<endl;
    //     }
    // }

    
    // M: Hollow Triangle:


    // int n;
    // cin>>n;

    // for(int i=0; i<n; i++){

    //     for(int j=0; j<n-i-1; j++){
    //         cout<<" ";
    //     }
    //     if(i==0){
    //         cout<<"*";

    //     }
    //     else if(i == n-1){
    //         for(int j=0; j<=i; j++){
    //             cout<<"*";
    //             if(j < i){
    //                 cout<<" ";
    //             }
    //         }
    //     }else{
    //         cout<<"*";
    //         for(int j=0; j<2 * i-1; j++){
    //             cout<<" ";
    //         }
    //         cout<<"*";
    //     }
    //     if(i<n-1){
    //         cout<< endl;
    //     }
    // }

    // N: Inverted Hollow Triangle


    // for(int i=n-1; i>=0; i--){

    //     for(int j=0; j<n-i-1; j++){
    //         cout<<" ";
    //     }
    //     if(i==0){
    //         cout<<"*";

    //     }
    //     else if(i == n-1){
    //         for(int j=0; j<=i; j++){
    //             cout<<"*";
    //             if(j < i){
    //                 cout<<" ";
    //             }
    //         }
    //     }else{
    //         cout<<"*";
    //         for(int j=0; j<2 * i-1; j++){
    //             cout<<" ";
    //         }
    //         cout<<"*";
    //     }
    //     if(i>0){
    //         cout<< endl;
    //     }
    // }


    //O: Diamond

    // int n;
    // cin>>n;

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n-i; j++){
    //         cout<<" ";
    //     }
    //     for(int j=0; j<=i; j++){
    //         cout<<"*";
    //         if(j < i){
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }
    // for(int i=n-2; i>=0; i--){
    //     for(int j=0; j<n-i; j++){
    //         cout<<" ";
    //     }
    //     for(int j=0; j<=i; j++){
    //         cout<<"*";
    //         if(j<i){
    //             cout<<" ";
    //         }
    //     }
    //     if(i>0){
    //         cout<<endl;
    //     }
    // }

    // P: Hollow Diamod

    // int n;
    // cin>>n;

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n-i; j++){
    //         cout<<" ";
    //     }

    //     if(i==0){
    //         cout<<"*";
    //     }else{
    //         cout<<"*";
    //         for(int j=0; j<2*i-1; j++){
    //             cout<<" ";
    //         }
    //         cout<<"*";
    //     }
    //     if(i<n){
    //         cout<<endl;
    //     }
    // }


    // for(int i=n-2; i>=0; i--){
    //     for(int j=0; j<n-i; j++){
    //         cout<<" ";
    //     }

    //     if(i==0){
    //         cout<<"*";
    //     }else{
    //         cout<<"*";
    //         for(int j=0; j<2*i-1; j++){
    //             cout<<" ";
    //         }
    //         cout<<"*";
    //     }
    //     if(i>0){
    //         cout<<endl;
    //     }
    // }


    //Q: CROWN

    // int n;
    // cin>>n;

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<=i; j++){
    //         cout<<"*";
    //     }
    //     for(int j=i+1; j<2*n-i-1; j++){
    //         cout<<" ";
    //     }
    //     for(int j=2*n-i; j<=2*n; j++){
    //         cout<<"*";
    //     }
    //     if(i < n){
    //         cout<<endl;
    //     }
    // }


    // R: Butterfly

    // int n;
    // cin>>n;

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<=i; j++){
    //         cout<<"*";
    //     }
    //     for(int j=i+1; j<2*n-i-1; j++){
    //         cout<<" ";
    //     }
    //     for(int j=2*n-i; j<=2*n; j++){
    //         cout<<"*";
    //     }
    //     if(i < n){
    //         cout<<endl;
    //     }
    // }
    // for(int i=n-2; i>=0; i--){
    //     for(int j=0; j<=i; j++){
    //         cout<<"*";
    //     }
    //     for(int j=i+1; j<2*n-i-1; j++){
    //         cout<<" ";
    //     }
    //     for(int j=2*n-i; j<=2*n; j++){
    //         cout<<"*";
    //     }
    //     if(i >0){
    //         cout<<endl;
    //     }
    // }

    
    // S: Inverted Diamond:

    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<"*";
        }
        for(int j=0; j<2*i + 1; j++){
            cout<<" ";
        }
        for(int j=0; j<n-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=n-2; i>=0; i--){
        for(int j=0; j<n-i; j++){
            cout<<"*";
        }
        for(int j=0; j<2*i + 1; j++){
            cout<<" ";
        }
        for(int j=0; j<n-i; j++){
            cout<<"*";
        }

        cout<<endl;
    }

}