#include<bits/stdc++.h>
using namespace std;

class SolutionA{
    public:

    void rotateClockwise(vector<vector<int>> &mat){
        int n = mat.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                swap(mat[i][j], mat[j][i]);
            }
        }

        for(int i=0; i<n; i++){
            reverse(mat[i].begin(), mat[i].end());
        }
    }


};

class SolutionB {
    public:
    
        vector<vector<int>> merge(vector<vector<int>> &intervals){
            sort(intervals.begin(), intervals.end());

            vector<vector<int>> ans;

            for(auto it: intervals){
                if(ans.empty() || ans.back()[1] < it[0]){
                    ans.push_back(it);
                }else{
                    ans.back()[1] = max(ans.back()[1], it[1]);
                }
            }
            return ans;
        }

};

class SolutionC{
    public:

        void merge(vector<int> &nums1, int m, vector<int> &nums2, int n){
            int i= m-1;
            int j= n-1;

            int k = m+n-1;

            while(i >=0 && j>= 0){
                if(nums1[i] > nums2[j]){
                    nums1[k--] = nums1[i--];
                }else{
                    nums1[k--] = nums2[j--];
                }
            }

            while(j>=0){
                nums1[k] = nums2[j];
                j--;
                k--;
            }
        }


};

int main(){
    // A: 
    // vector<vector<int>> mat = {
    //     {1,2,3},
    //     {4,5,6},
    //     {7,8,9}
    // };

    // SolutionA sol;
    // sol.rotateClockwise(mat);

    // for(auto row: mat){
    //     for(auto val: row){
    //         cout<<val<<" ";
    //     }
    //     cout<<endl;
    // }


    // B: 

    // SolutionB sol;
    // vector<vector<int>> intervals = {
    //     {1, 3}, {2, 6}, {8, 10}, {15, 18}
    // };

    // vector<vector<int>> result = sol.merge(intervals);

    // for (auto v : result) {
    //     cout << "[" << v[0] << "," << v[1] << "] ";
    // }

    // return 0;

    // C: 
    vector<int> nums1 = {1,3, 5, 0,0,0};
    vector<int> nums2 = {2, 4, 6};

    int m = 3, n = 3;
    SolutionC sol;
    sol.merge(nums1, m, nums2, n);

    for(int num: nums1){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}