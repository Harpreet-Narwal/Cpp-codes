#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// A: Second Largest:

// int main(){
//     int n;
//     cin>>n;

//     vector<int> arr(n);

//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     int maxi = 0;
//     int maxiTwo = -1;

//     for(int i=0; i<n; i++){
//         if(arr[i] > maxi){
//             maxi = arr[i];
//         }
//     }

//     for(int i=0; i<n; i++){
//         if(arr[i] > maxiTwo && arr[i] < maxi){
//             maxiTwo = arr[i];
//         }
//     }

//     cout<<maxiTwo;
// }

// B: Push Zeros to the End:

// int main(){
//     int t;
//     cin>>t;

//     while(t--){
//         int n;
//         cin>>n;
//         vector<int> arr(n);
//         int zeros = 0;
//         for(int i=0; i<n; i++){
//             cin>>arr[i];
//             if(arr[i] == 0){
//                 zeros++;
//             }
//         }

//         for(int i=0; i<n; i++){
//             if(arr[i] != 0){
//                 cout<<arr[i]<<" ";
//             }
//         }

//         for(int i=0; i<zeros; i++){
//             cout<<0<<" ";
//         }

//         cout<<endl;
//     }
// }


// C: Check Array rotation:

// int main(){
//     int t;
//     cin>>t;

//     while(t--){
//         int n;
//         cin>>n;
//         vector<int> arr(n);

//         for(int i=0; i<n; i++){
//             cin>>arr[i];
//         }

//         int ind = 0;
//         int mini = INT_MAX;

//         for(int i=0; i<n; i++){
//             if(arr[i] < mini){
//                 mini = arr[i];
//                 ind = i;
//             }
//         }

//         cout<<ind<<endl;
//     }
// }


// D: Rotate Array:

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);

        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int d;
        cin>>d;

        for(int i=d; i<n; i++){
            cout<<arr[i]<<" ";
        }

        for(int i=0; i<d; i++){
            cout<<arr[i]<<" ";
        }

        cout<<endl;
    }
}