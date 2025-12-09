#include<bits/stdc++.h>
#include<iostream>

using namespace std;

class Solution{
private:
    int fun(int ind1, int ind2, string &s1, string &s2, vector<vector<int>> &dp){
        if(ind1 < 0 || ind2 < 0) return 0;

        if(dp[ind1][ind2] != -1) return dp[ind1][ind2];

        if(s1[ind1] == s2[ind2]) return dp[ind1][ind2] = 1 + fun(ind1-1, ind2-1, s1, s2, dp);
        
        else return dp[ind1][ind2] = 0 + max(fun(ind1-1, ind2, s1, s2, dp), fun(ind1, ind2-1, s1, s2, dp));

    }

public:

    int LCSUsingMemoization(string &s1, string &s2){
        int n = s1.size();
        int m = s2.size();

        vector<vector<int>> dp(n, vector<int> (m, -1));

        return fun(n-1, m-1, s1, s2, dp);
    }

    int LCSUsingTabulation(string &s1, string &s2){
        int n = s1.size();
        int m = s2.size();

        vector<vector<int>> dp(n+ 1, vector<int> (m + 1, -1));

        for(int i=1 ;i<= n; i++){
            dp[i][0] = 0;
        }
        for(int i=0; i<= m; i++){
            dp[0][i] = 0;
        }

        for(int i=1; i<= n; i++){
            for(int j=1; j<= m; j++){
                if(s1[i-1] == s2[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }else{
                    dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
                }

            }
        }
        return dp[n][m];
    }
};

int main(){
    string s1 = "acd";
    string s2 = "ced";

    Solution sol;

    cout<<" The Length of Longest Common Subsequence is: "<< sol.LCSUsingMemoization(s1, s2)<<endl;;
    cout<<" The Length of Longest Common Subsequence is: "<< sol.LCSUsingTabulation(s1, s2)<<endl;
    return 0;
}