#include<bits/stdc++.h>
using namespace std;


// // A: Set Matrix Zero:
// // BRUTE FORCE:
// // class Solution{
// //     public:
// //     void setZero(vector<vector<int>> &mat){
// //         int m = mat.size();
// //         int n = mat[0].size();

// //         for(int i=0; i<m; i++){
// //             for(int j=0; j<n; j++){
// //                 if(mat[i][j] == 0){

// //                     for(int col = 0; col < n; col++){
// //                         if(mat[i][col] != 0)
// //                             mat[i][col] = -1;
// //                     }

// //                     for(int row = 0; row < m ;row++){
// //                         if(mat[row][j] != 0){
// //                             mat[row][j] = -1;
// //                         }
// //                     }
// //                 }
// //             }
// //         }

// //         for(int i=0; i<m; i++){
// //             for(int j=0; j<n; j++){
// //                 if(mat[i][j] == -1){
// //                     mat[i][j] = 0;
// //                 }
// //             }
// //         }

// //     }
// // };


// // Optimal Approach:

class SolutionA{
    public:

    void setZero(vector<vector<int>> &mat){
        int n = mat.size();
        int m = mat[0].size();

        bool firstRowZero = false;
        bool firstColZero = false;

        for(int j=0; j<m; j++){
            if(mat[0][j] == 0){
                firstRowZero = true;
                break;
            }
        }

        for(int i=0; i<n; i++){
            if(mat[i][0] == 0){
                firstColZero = true;
                break;
            }
        }
        for(int i=1; i<n; i++){
            for(int j=1; j<m; j++){
                if(mat[i][j] == 0){
                    mat[i][0] = 0;
                    mat[0][j] = 0;
                }
            }
        }

        for(int i=1; i<n; i++){
            for(int j=1; j<m; j++){
                if(mat[i][0] == 0 || mat[0][j] == 0){
                    mat[i][j] =0;
                }
            }
        }

        if(firstRowZero){
            for(int j=0; j<m; j++){
                mat[0][j] = 0;
            }
        }

        if(firstColZero){
            for(int i=0; i<n; i++){
                mat[i][0] = 0;
            }
        }
    }
};




// int main(){
//     vector<vector<int>> matrix = {{1,1,1}, {1,0,1}, {1,1,1,}, {1,1, 1}};

//     SolutionA sol;

//     sol.setZero(matrix);

//     for(int i=0; i<matrix.size(); i++){
//         for(int j=0; j< matrix[0].size(); j++){
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;

// }


// B: Pascal's Triangle - I:

class SolutionB{

    public: 
    vector<vector<int>> pascal(int n){
        vector<vector<int>> ans;

        for(int i=0; i<n; i++){

            vector<int> row(i+1, 1);
            
            for(int j=1; j<i; j++){
                row[j] = ans[i-1][j-1] + ans[i-1][j];
            }

            ans.push_back(row);
        }
        return ans;
    }

};


// int main(){
//     SolutionB sol;
//     int n=5;

//     vector<vector<int>> result = sol.pascal(n);
//     for(auto &row: result){
//         for(auto &it: row){
//             cout<<it<<" ";
//         }
//         cout<<endl;
//     }
// }


// C: Next Permutation:

class SolutionC{
    public:

    void nextPermutation(vector<int>& nums){
        int ind = -1;
        for(int i=nums.size()-2; i>= 0; i--){
            if(nums[i] < nums[i+1]){
                ind = i;
                break;
            }
        }

        if(ind == -1){
            reverse(nums.begin(), nums.end());
            return;
        }

        for(int i=nums.size()-1; i > ind; i--){
            if(nums[i] > nums[ind]){
                swap(nums[i], nums[ind]);
                break;
            }
        }

        reverse(nums.begin() + ind + 1, nums.end());
    }
};

int main(){
    vector<int> nums = {1,2, 3};

    SolutionC sol;

    sol.nextPermutation(nums);

    for(int num: nums){
        cout<<num<< " ";
    }
    cout<<endl;

    return 0;

}