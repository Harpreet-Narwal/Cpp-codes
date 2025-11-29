#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Solution{
public:
    int longestStrChain(vector<string> &words){
        int n = words.size();
        vector<int> dp(n, 1);
        sort(words.begin(), words.end(), compare);

        int maxLen = 0;

        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                if(checkPossible(words[i], words[j]) && dp[j] + 1 > dp[i]){
                    dp[i] = dp[j] + 1;
                }
            }
            if(maxLen < dp[i]){
                maxLen = dp[i];
            }
        }
        return maxLen;
    }
private:
    bool static compare(string &s, string &t){
        return s.size() < t.size();
    }

    bool checkPossible(string &s, string &t){
        if(s.size() != t.size() + 1) return false;

        int i=0, j=0;

        while(i < s.size()){
            if(j < t.size() && s[i] == t[j]){
                i++;
                j++;

            }
            else{
                i++;
            }
        }
        if(i == s.size() && j == t.size()) return true;
        return false;

    }

};

int main(){
    vector<string> words = {"a", "ab", "abc", "abcd", "abcde"};
    Solution sol;

    int lengthOfLongestStringChain = sol.longestStrChain(words);

    cout<<" The length of the Longest String Chain is: " << lengthOfLongestStringChain<<endl;

    return 0;

}