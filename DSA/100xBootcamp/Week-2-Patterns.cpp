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
    int n;
    cin>>n;
    

    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){

            if((i + j) % 2 == 0){
                cout<<"0";
            }else{
                cout<<"1";
            }
        }
        cout<<endl;
    }

}