#include<bits/stdc++.h>
#include<iostream>

using namespace std;

class Solution{
public:
    int fun(int ind, int N, vector<int> &price, vector<vector<int>> &dp){
        if(ind == 0){
            return N * price[0];
        }
        if(dp[ind][N] != -1) return dp[ind][N];

        int notTake = 0 + fun(ind-1, N, price, dp);
        int take = INT_MIN;
        int rodLength = ind + 1;

        if(rodLength <= N){
            take = price[ind] + fun(ind, N - rodLength, price, dp);
        }
        return dp[ind][N] = max(take, notTake);

    }

    int rodCutting(vector<int> &price, int n){
        vector<vector<int>> dp(n, vector<int> (n+1, -1));

        return fun(n-1, n, price, dp);
    }

};


int main(){

    vector<int> price = {5, 5, 8, 9, 10, 17, 17, 20};
    int n = price.size();
    
    Solution sol;

    cout<<" The Maximum value is: " <<sol.rodCutting(price, n)<<endl;

    return 0;
}