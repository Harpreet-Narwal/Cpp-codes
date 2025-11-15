#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Solution{
    int mod = 1e9+7;
private: 
    int fun(int ind, int target, vector<int> &arr, vector<vector<int>> &dp){
        if(ind == 0) {
            if(target == 0 && arr[ind] == 0) return 2;
            if(target == 0 || target == arr[ind]) return 1;

            return 0;
        }
        if(dp[ind][target] != -1) return dp[ind][target];

        int notTake = fun(ind-1, target, arr, dp);
        int take = 0;
        if(arr[ind] <= target){
            take = fun(ind-1, target - arr[ind], arr, dp);
        }
        return dp[ind][target] = (take + notTake) % mod;
    }

public:
    int countPartitions(int n, int diff, vector<int> &arr){
        int totalSum = 0;

        for(auto &it: arr){
            totalSum  += it;
        }

        if(totalSum-diff < 0 ) return 0;
        if((totalSum -diff) %2 == 1) return 0;

        int s2 = (totalSum-diff)/2;

        vector<vector<int>> dp(n, vector<int> (s2 + 1, -1));

        return fun(n-1, s2, arr,dp);

    }

};

int main(){
    vector<int> arr = {1, 1, 2, 3};
    int n = arr.size();
    int diff = 1;

    Solution sol;

    cout<<" THe number of subsets found are: " << sol.countPartitions(n, diff, arr);

    return 0;

}