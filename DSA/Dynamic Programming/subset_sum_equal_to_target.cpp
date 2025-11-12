#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Solution {
private:
    bool fun(int ind, int target, vector<int> &arr, vector<vector<int>> &dp){
        if(target == 0) return true;
        if(ind ==0 )return arr[0] == target;

        if(dp[ind][target] != -1) return dp[ind][target];

        bool notTake = fun(ind-1, target, arr, dp);

        bool take = false;
        if(target >= arr[ind]){
            take = fun(ind-1, target-arr[ind], arr, dp);
        }
        return dp[ind][target] = take || notTake;
    }

public:
    bool isSubset(vector<int> &arr, int target){
        vector<vector<int>> dp(arr.size(), vector<int> (target+1, -1));
        return fun(arr.size()-1, target, arr, dp);
    }
};


int main(){
    vector<int> arr = {1, 2 ,3, 4};
    int target = 4;

    Solution sol;

    if(sol.isSubset(arr,target)){
        std::cout<<"Subset with the given target found";
    }else{
        std::cout<<"Subset with the given target not found";
    }

    return 0;
}
