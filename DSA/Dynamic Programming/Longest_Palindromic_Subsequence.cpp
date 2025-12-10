#include<bits/stdc++.h>
#include<iostream>

using namespace std;

class Solution{
    public:

    int fun(string &s1, string &s2){
        int n = s1.size();
        int m = s2.size();

        vector<vector<int>> dp(n+1, vector<int> (m+1, 0));

        for(int i=1; i<= n; i++){
            for(int j=1; j<= m; j++){
                if(s1[i-1] == s2[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];

                }else{
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        return dp[n][m];
    }

    int longestPalinSubseq(string &s){
        string t = s;
        reverse(t.begin(), t.end());

        return fun(s, t);
    }
};

int main(){
    string s = "eeeme";

    Solution sol;

    cout<<" The Length of Longest Palindromic Subsequence is: "<< sol.longestPalinSubseq(s);
    return 0;

}