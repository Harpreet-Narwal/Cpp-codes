#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Solution{
private:
    int fun(int ind, int target, vector<int>&arr , vector<vector<int>> &dp){
        if(ind == 0){
            if(target % arr[0] == 0) return target / arr[0];
            else return 1e9;
        }
        if(dp[ind][target] != -1) return dp[ind][target];
        int notTake = 0 + fun(ind-1, target, arr, dp);
        int take = 1e9;

        if(target >= arr[ind]){
            take = 1 + fun(ind ,target - arr[ind], arr, dp);
        }
        return dp[ind][target] = min(take ,notTake);
    }

public:
    int minimumCoins(vector<int> &coins, int target){
        int n = coins.size();
        vector<vector<int>> dp(n, vector<int> (target + 1, -1));

        int ans = fun(n-1, target, coins, dp);

        if(ans >= (int)1e9){
            return -1;
        }

        return ans;
    }
};

int main(){
    vector<int> coins = {1, 2, 5};
    int target = 11;

    Solution sol;

    cout<<" The total number of ways is: " << sol.minimumCoins(coins, target)<<endl;

    return 0;
}