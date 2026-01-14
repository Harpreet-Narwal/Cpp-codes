#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Solution{
    public:

    int fun(int i, int j, string pattern, string text, vector<vector<int>> &dp){
        if(i<0 && j <0 ) return true;
        if(i<0 && j>= 0) return false;
        if(j<0 && i>=0){
            for(int x = 0; x <= i; x++){
                if(pattern[x] != '*') return false;
            }
            return true;
        }

        if(dp[i][j] != -1) return dp[i][j];

        if(pattern[i] == text[j] || pattern[i] == '?'){
            return dp[i][j] = fun(i-1, j-1, pattern, text, dp);
        }if(pattern[i] == '*'){
            return dp[i][j] = fun(i-1, j, pattern, text, dp) || fun(i, j-1, pattern, text, dp);
        }
        return dp[i][j] = false;

    }

    bool wildCard(string s1, string s2){
        int n = s1.size();
        int m = s2.size();

        vector<vector<int>> dp(n, vector<int> (m, -1));
        return fun( n-1, m-1, s1, s2, dp);
    }
};


int main(){
    string s1 = "ab*cd";
    string s2 = "abdefcd";

    Solution sol;

    if(sol.wildCard(s1, s2)){
        cout<<" String S1 and String S2 do match";
    }else{
        cout<<" String S1 and String S2 doesn't match";
    }

}
