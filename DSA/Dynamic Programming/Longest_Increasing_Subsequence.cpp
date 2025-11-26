#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Solution{
private:
    int fun(int ind, int prevInd, int n, vector<int> &arr, vector<vector<int>> &dp){
        if(ind == n-1){
            if(prevInd == -1 || arr[prevInd] < arr[ind]) return 1;
            return 0;
        }

        if(dp[ind][prevInd + 1] != -1) return dp[ind][prevInd+1];
        int notTake = fun(ind +1, prevInd, n, arr, dp);
        int take = 0;
        if(prevInd == -1){
            take = fun(ind + 1, ind, n, arr, dp) + 1;

        }
        else if(arr[ind] > arr[prevInd]){
            take = fun(ind + 1, ind,n, arr, dp) + 1;
        }

        return dp[ind][prevInd + 1] = max(take, notTake);
    }

public:
    int LIS(vector<int> &arr){
        int n = arr.size();
        vector<vector<int>> dp(n, vector<int> (n+1, -1));

        return fun(0, -1, n, arr, dp);
    }

};


int main(){
    vector<int> nums = {10, 9, 2, 5, 3, 7, 101, 18};

    Solution sol;
    int lengthOfLIS = sol.LIS(nums);
    cout<<" The length of the LIS for the given array is: "<< lengthOfLIS<<endl;

    return 0;
}