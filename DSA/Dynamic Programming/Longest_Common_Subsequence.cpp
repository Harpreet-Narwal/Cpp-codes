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

    int LCS(string &s1, string &s2){
        int n = s1.size();
        int m = s2.size();

        vector<vector<int>> dp(n, vector<int> (m, -1));

        return fun(n-1, m-1, s1, s2, dp);
    }
};

int main(){
    string s1 = "acd";
    string s2 = "ced";

    Solution sol;

    cout<<" The Length of Longest Common Subsequence is: "<< sol.LCS(s1, s2)<<endl;;
    return 0;
}