#include<bits/stdc++.h>
#include<iostream>

using namespace std;

class Solution{
private:
        int mod = 1e9 + 7;  
public:
    int fun(int i, int j, string s1, string s2, vector<vector<int>> &dp){
        if(j < 0) return 1;
        if(i < 0) return 0;

        if(dp[i][j] != -1) return dp[i][j];

        if(dp[i][j] != -1) return dp[i][j];

        if(s1[i] == s2[j]){
            dp[i][j] = (fun(i-1, j-1, s1, s2, dp) + fun(i-1, j, s1, s2, dp)) % mod;
        }
        else{
            dp[i][j] = fun(i-1, j, s1, s2, dp);
        }

        return dp[i][j];
    }

    int distinctSubsequence(string s1, string s2){
        int n = s1.size();
        int m = s2.size();

        vector<vector<int>> dp(n, vector<int> (m , -1));

        return fun(n-1, m-1, s1, s2, dp);
    }


};


int main(){
    string s1 = "babgbag";
    string s2 = "bag";

    Solution sol;

    cout<< " The Count of Distinct Subsequence is " << sol.distinctSubsequence(s1, s2)<<endl;

    return 0;
}