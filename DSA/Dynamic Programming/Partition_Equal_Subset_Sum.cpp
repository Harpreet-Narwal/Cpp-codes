#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Solution{
private:
    bool fun(int ind, int target, vector<int> &arr, vector<vector<int>> &dp){
        if(target== 0) return true;
        if(ind ==0) return arr[0] == target;

        if(dp[ind][target] != -1) return dp[ind][target];

        bool notTake = fun(ind-1, target, arr, dp);

        bool take = false;
        if(target >= arr[ind]){
            take = fun(ind-1, target-arr[ind], arr, dp);
        }

        return dp[ind][target] = take || notTake;
    }
    
public:
    bool equalPartition(int n, vector<int> &arr){
        int totalSum = 0;

        for(int i=0; i<n; i++){
            totalSum += arr[i];
        }

        if(totalSum % 2) return false;
        int k = totalSum/2;

        vector<vector<int>> dp(n, vector<int>(k+1, -1));

        return fun(n-1, k, arr, dp);
    }

};



int main(){
    vector<int> arr = {2, 3, 3, 3, 4, 5};
    int n = arr.size();


    Solution sol;

    if(sol.equalPartition(n, arr)){
        std::cout<<"The Array can be partitioned into two equal subsets";
    }
    else{
        std::cout<<"The Array cannot be partitioned into two equal subsets";
    }

}