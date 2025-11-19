#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Solution {
public:
    int mod = 1e9 + 7;

    int fun(int ind, int target, vector<int> &arr, vector<vector<int>> &dp){
        if(ind == 0){
            if(target == 0 && arr[ind] == 0) return 2;
            if(target == 0 || arr[ind] == target) return 1;

            return 0;
        }

        if(dp[ind][target] != -1) return dp[ind][target];

        int notTake = fun(ind-1, target, arr, dp);
        int take = 0;

        if(target >= arr[ind]){
            take = fun(ind -1, target - arr[ind], arr, dp);
        }

        return dp[ind][target] = (notTake + take) % mod;
    }

    int targetSum(int n, int target, vector<int>& nums) {
        int totalSum = 0;
        for(int i=0; i<nums.size(); i++){
            totalSum += nums[i];
        }    
        if(totalSum - target < 0) return 0;
        if((totalSum - target) % 2 == 1) return 0;

        int s2 = (totalSum - target)/2;

        vector<vector<int>> dp(n, vector<int> (s2 + 1, -1));

        return fun(n -1, s2, nums, dp); 
    }
};

int main(){
    // vector<int> arr = {1, 2, 3, 1};
    // int target = 3;
    int size;
    cin>>size;

    vector<int> arr;

    for(int i=0; i<size; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int target;
    cin>>target;
    int n = arr.size();

    Solution sol;

    cout<<" The total number of ways is: " <<sol.targetSum(n, target, arr)<<endl;

    return 0;
}