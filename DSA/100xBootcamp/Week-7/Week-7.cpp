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
//         int d;
//         cin>>d;

//         for(int i=d; i<n; i++){
//             cout<<arr[i]<<" ";
//         }

//         for(int i=0; i<d; i++){
//             cout<<arr[i]<<" ";
//         }

//         cout<<endl;
//     }
// }


// E: Sum of Digits - II

// int main(){
//     string s;
//     getline(cin, s);

//     int sum = 0;
//     for(int i=0; i<s.length(); i++){
//         sum += s[i] - '0';
//     }

//     cout<<sum;

// }


// F: String Compression:

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         string s;
//         cin>>s;
//         int cnt = 1;
//         for(int i=1; i<s.length(); i++){
//             if(s[i-1] == s[i]){
//                 cnt++;
//             }else if(s[i-1] != s[i]){

//                 cout<<s[i-1];
//                 if(cnt >1){
//                     cout<<cnt;
//                 }
//                 cnt = 1;
//             }
//         }
//         cout<<s[s.length()-1];
//         if(cnt > 1){
//             cout<<cnt;
//         }
//         cout<<endl;
//     }
// }


// G: Longest Word:

// int main(){
//     string s;
//     getline(cin, s);
//     int cnt = 0;
//     int n = s.length();
//     int maxi = INT_MIN;

//     for(int i=0; i<n; i++){
//         if(s[i] != ' '){
//             cnt++;
//         }else if(s[i] == ' '){
//             if(cnt > maxi){
//                 maxi = cnt;
//             }
//             cnt = 0;
//         }
//     }
//     if(cnt > maxi){
//         maxi = cnt;
//     }

//     cout<<maxi;
// }


// H: Diagonal Sum:

// int main(){
//     int n;
//     cin>>n;

//     vector<vector<int>> arr(n, vector<int> (n));

//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cin>>arr[i][j];
//         }
//     }

//     int sum = 0;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             if(i == j){
//                 sum += arr[i][j];
//             }
//         }
//     }

//     cout<<sum;
// }

// I: Rotate Image:

// int main(){
//     int n;
//     cin>>n;

//     vector<vector<int>> arr(n, vector<int> (n));

//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cin>>arr[i][j];
//         }
//     }

//     for(int j=0; j<n; j++){
//         for(int i=n-1; i>= 0; i--){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;

// }


// J: Spiral Matrix:

int main(){
    int n, m;
    cin>>n>>m;

    vector<vector<int>> arr(n, vector<int> (m));

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    int sr = 0, sc = 0, er = n-1, ec = m-1;
    while(sr <= er && sc <= ec){
        for(int i=sc; i<=ec; i++){
            cout<<arr[sr][i]<<" ";
        }

        for(int i=sr+1; i<=er; i++){
            cout<<arr[i][ec]<<" ";
        }
        if(sr < er){
            for(int i=ec-1; i>=sc; i--){
                cout<<arr[er][i]<<" ";
            }
        }

        if(sc < ec){
            for(int i=er-1; i> sr; i--){
                cout<<arr[i][sc]<<" ";
            }
        }

        sr++;
        sc++;
        er--;
        ec--;
    }
    
}