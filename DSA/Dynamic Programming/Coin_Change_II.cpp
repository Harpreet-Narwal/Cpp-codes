#include<bits/stdc++.h>
#include<iostream>

using namespace std;

class Solution{
    public:

    int mod = 1e9 + 7;

    int fun(int ind, int target, vector<int> &coins, vector<vector<int>> &dp){
        if(ind == 0){
            return (target % coins[ind] == 0);
        }

        if(dp[ind][target] != -1) return dp[ind][target];

        int notTake = fun(ind-1, target ,coins, dp);

        int take = 0;
        if(target >= coins[ind]){
            take = fun(ind, target-coins[ind], coins, dp);
        }
        return dp[ind][target] = (take + notTake) % mod;

    }

    int count(vector<int> &coins, int N, int amount){
        vector<vector<int>> dp(N, vector<int> (amount + 1, -1));

        return fun(N-1, amount, coins, dp);
    }
};

int main(){
    vector<int> coins = {1, 2, 3};
    int amount = 4;
    int N = coins.size();

    Solution sol;

    cout<< " The total number of ways is: " << sol.count(coins,N, amount)<<endl;

    return 0;

}