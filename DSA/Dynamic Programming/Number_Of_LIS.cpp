#include<bits/stdc++.h>
#include<iostream>

using namespace std;

class Solution{
public: 
    int numberOfLis(vector<int> &arr){
        int n = arr.size();

        int ans = 0;
        int maxLen = 0;

        vector<int> dp(n, 1);
        vector<int> cnt(n, 1);

        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                if(arr[i] > arr[j] && dp[i] < dp[j] + 1){
                    dp[i] = dp[j] + 1;
                    cnt[i] = cnt[j];
                }
                else if(arr[i] > arr[j] && dp[i] == dp[j] + 1){
                    cnt[i] += cnt[j];
                }
            }
            maxLen = max(maxLen , dp[i]);
        }   
    
        for(int i=0; i<n; i++){
            if(dp[i] == maxLen) ans += cnt[i];
        }
        
        return ans;
    }
};


int main(){
    vector<int> arr = {1, 3, 5, 4 ,7};

    Solution sol;
    int ans = sol.numberOfLis(arr);

    cout<<" The number of LIS present in the given array is: "<< ans<< endl;

    return 0;
}