#include<iostream>
#include<vector>
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

// int main(){
//     int n,m;

//     cin>>n>>m;

//     vector<vector<int>> arr(n, vector<int> (m));

//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cin>>arr[i][j];
//         }
//     }


//     for(int j=0; j<m; j++){
//         for(int i=0; i<n; i++){
//             cout<<arr[i][j]<<" ";
//         }
//     }


//     return 0;
// }



// C: Find Maximum:

// int main(){
//     int n,m;

//     cin>>n>>m;

//     vector<vector<int>> arr(n, vector<int> (m));

//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cin>>arr[i][j];
//         }
//     }

//     int maxi = INT_MIN;
//     for(int j=0; j<m; j++){
//         for(int i=0; i<n; i++){
//             if(maxi < arr[i][j]){
//                 maxi = arr[i][j];
//             }
//         }
//     }

//     cout<<maxi;


//     return 0;
// }


// D: Finding element:

// int main(){
//     int n,m, x;

//     cin>>n>>m>>x;

//     vector<vector<int>> arr(n, vector<int> (m));

//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cin>>arr[i][j];
//         }
//     }
//     bool flag = false;
//     for(int j=0; j<m; j++){
//         for(int i=0; i<n; i++){
//             if(arr[i][j] == x){
//                 flag = true;
//             }
//         }
//     }

//     if(flag == true){
//         cout<<"true";
//     }else{
//         cout<<"false";
//     }


//     return 0;
// }

// E: Row Minimum:


// int main(){
//     int n,m;

//     cin>>n>>m;

//     vector<vector<int>> arr(n, vector<int> (m));

//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cin>>arr[i][j];
//         }
//     }

//     vector<int> ans;
//     for(int i=0; i<n; i++){
//         int mini = INT_MAX;
//         for(int j=0; j<m; j++){
//             if(mini > arr[i][j]){
//                 mini = arr[i][j];
//             }
//         }
//         ans.push_back(mini);
//     }

//     for(int i=0; i<ans.size(); i++){
//         cout<<ans[i]<<" ";
//     }

//     return 0;
// }



// F: Column Sum:

// int main(){
//     int n,m;

//     cin>>n>>m;

//     vector<vector<int>> arr(n, vector<int> (m));

//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cin>>arr[i][j];
//         }
//     }

//     vector<int> sum;
//     for(int j=0; j<m; j++){
//         int ans = 0;
//         for(int i=0; i<n; i++){
//             ans += arr[i][j];
//         }
//         sum.push_back(ans);
//     }

//     for(int i=0; i<sum.size(); i++){
//         cout<<sum[i]<<" ";
//     }

//     return 0;
// }


// G: Row with max 1s


// int main(){
//     int n,m;

//     cin>>n>>m;

//     vector<vector<int>> arr(n, vector<int> (m));

//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cin>>arr[i][j];
//         }
//     }

//     int ans = -1;
//     int maxOnes = 0;

//     for(int i=0; i<n; i++){
//         int sum = 0;
//         for(int j=0; j<m; j++){
//             sum += arr[i][j];
//         }
//         if(sum > maxOnes){
//             ans = i;
//             maxOnes = sum;
//         }
//     }

//     if(maxOnes == 0){
//         cout<<-1;
//     }else{
//         cout<<ans;
//     }


//     return 0;
// }



// H: Wave - 1

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
//         if(i % 2 == 0){
//             for(int j=0; j<m; j++){
//                 cout<<arr[i][j]<<" ";
//             }
//         }
//         else{
//             for(int j=m-1; j>= 0; j--){
//                 cout<<arr[i][j]<<" ";
//             }
//         }
//     }


//     return 0;
// }


// I: WAVE - II

// int main(){
//     int n,m;

//     cin>>n>>m;

//     vector<vector<int>> arr(n, vector<int> (m));

//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cin>>arr[i][j];
//         }
//     }

//     for(int i=0; i<m; i++){
//         if(i % 2 == 0){
//             for(int j=0; j<n; j++){
//                 cout<<arr[j][i]<<" ";
//             }
//         }
//         else{
//             for(int j=n-1; j>= 0; j--){
//                 cout<<arr[j][i]<<" ";
//             }
//         }
//     }


//     return 0;
// }


// J: Boundary Traversal:


// int main(){
//     int n,m;

//     cin>>n>>m;

//     vector<vector<int>> arr(n, vector<int> (m));

//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cin>>arr[i][j];
//         }
//     }


//     for(int j=0; j<m; j++){
//         cout<<arr[0][j]<<" ";
//     }

//     for(int i=1; i<n; i++){
//         cout<<arr[i][m-1]<<" ";
//     }
//     if(n > 1){
//         for(int j=m-2; j>= 0; j--){
//             cout<<arr[n-1][j]<<" ";
//         }
//     }


//     if(m > 1){
//         for(int i=n-2; i>= 1; i--){
//             cout<<arr[i][0]<<" ";
//         }
//     }   

//     return 0;
// }