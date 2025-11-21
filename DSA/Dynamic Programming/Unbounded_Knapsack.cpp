#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Solution{
    public:

    int fun(int ind, int target, vector<int> &val, vector<int> &wt, vector<vector<int>> &dp){
        if(ind == 0){
            return (target/wt[ind]) * val[ind];
        }
        if(dp[ind][target] != -1) return dp[ind][target]; 

        int notTake = 0 + fun(ind-1, target, val, wt, dp);
        int take = INT_MIN;

        if(target >= wt[ind]){
            take = val[ind] + fun(ind, target -wt[ind] , val,wt, dp);
        }
        return dp[ind][target] = max(take, notTake);

    }
    
    int unboundedKnapsack(vector<int> &wt, vector<int> &val, int n, int W){
        vector<vector<int>> dp(n, vector<int> (W + 1, -1));

        return fun(n-1, W, val, wt, dp);
    }
};

int main(){
    vector<int> val = {10, 40, 50, 70};
    vector<int> wt = {1, 3, 4, 5};

    int W = 8;
    int n = wt.size();

    Solution sol;

    cout<<" The maximum value of items the thief can steal is " << sol.unboundedKnapsack(wt, val, n, W)<<endl;

    return 0;
}