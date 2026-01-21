#include<bits/stdc++.h>
#include<iostream>

using namespace std;

class Solution{
    private:
    int fun(int i, int j, vector<int> &nums, vector<vector<int>> &dp){
        if(i > j) return 0;

        if(dp[i][j] != -1) return dp[i][j];
        int maxi = INT_MIN;

        for(int ind= i; ind <= j; ind++){
            int cost = nums[i-1] * nums[ind] * nums[j+1] + fun(i, ind-1, nums, dp) + fun(ind+1, j, nums, dp);
            maxi = max(maxi, cost);
        }

        return dp[i][j] = maxi;
    }

    public:
    int maxCoins(vector<int> &nums){
        // Memoization:
        // int n = nums.size();
        // nums.push_back(1);
        // nums.insert(nums.begin(), 1);

        // vector<vector<int>> dp(n + 1, vector<int> (n+1, -1));
        // return fun(1, n, nums, dp);

        //TABULATION:

        int n = nums.size();
        nums.push_back(1);
        nums.insert(nums.begin(), 1);

        vector<vector<int>> dp(n+2, vector<int> (n+2, 0));

        for(int i=n ; i>= 1; i--){
            for(int j=1; j<= n; j++){
                if(i > j) continue;
                int maxi = INT_MIN;
                
                for(int ind = i; ind <= j; ind++){
                    int coins = nums[i-1] * nums[ind] * nums[j+1] + dp[i][ind-1] + dp[ind+1][j];

                    maxi = max(coins, maxi);
                }

                dp[i][j] = maxi;
            }
        } 

        return dp[1][n];
    }


};

int main(){
    vector<int> nums = {3, 1, 5, 8};

    Solution sol;

    cout<<"Maximum coins obtained: "<<sol.maxCoins(nums);

    return 0;

}