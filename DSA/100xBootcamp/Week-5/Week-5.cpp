#include<bits/stdc++.h>
#include<iostream>

using namespace std;


// A: 
// int main(){
//     int n,m;

//     cin>>n>>m;

//     vector<vector<int>> arr(n, vector<int> (m));

//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cin>>arr[i][j];
//         }
//     }

//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cout<<arr[i][j]<<" ";
//         }
//     }

//     return 0;
// }

// B: Column Order:

int main(){
    int n,m;

    cin>>n>>m;

    vector<vector<int>> arr(n, vector<int> (m));

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }


    for(int j=0; j<m; j++){
        for(int i=0; i<n; i++){
            cout<<arr[i][j]<<" ";
        }
    }


    return 0;
}