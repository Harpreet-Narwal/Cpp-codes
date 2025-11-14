#include<bits/stdc++.h>
#include<iostream>

using namespace std;


class Solution{
    int mod = 1e9 + 7;

public: 
    int fun(int ind, int target, vector<int> &arr, vector<vector<int>> &dp){
        if(target == 0) return 1;
        if(ind == 0) return arr[ind] == target ? 1 : 0;
        if(dp[ind][target] != -1) return dp[ind][target];

        int notTake = fun(ind-1, target, arr, dp);
        int take = 0;
        if(target >= arr[ind]){
            take = fun(ind -1, target - arr[ind], arr, dp);
        }
        return dp[ind][target] = (take + notTake) % mod;
    }

    int perfectSum(vector<int> &arr, int k){
        int n = arr.size();

        vector<vector<int>> dp(n, vector<int> (k + 1, -1));

        return fun(n-1, k, arr, dp);
    }
};



int main(){
    vector<int> arr = {2, 3, 5, 16, 8, 10};
    int k=10;

    Solution sol;

    cout<< " The number of subsets found are: " <<sol.perfectSum(arr, k);

    return 0;
}