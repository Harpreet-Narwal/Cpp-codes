#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Solution{
private:
    int fun(int i, int j, vector<int> &arr, vector<vector<int>> &dp){
        if(i == j) return 0;

        if(dp[i][j] != -1) return dp[i][j];

			int mini = INT_MAX;
			for(int k=i; k<j; k++){
				int steps = (arr[i-1] * arr[k] * arr[j]) + fun(i, k, arr, dp) + fun(k+1, j, arr, dp);
				mini = min(mini, steps);
			}
			return dp[i][j] = mini;

    }

public:
    int matrixMultiplication(vector<int> &arr){
        int n = arr.size();

        vector<vector<int>> dp(n, vector<int> (n, -1));

        return fun(1, n-1, arr, dp);
    }


};

int main(){
    vector<int> arr = {10,20, 30, 40, 50};

    Solution sol;

    cout<< "The minimum number of operation is: " << sol.matrixMultiplication(arr)<<endl;

    return 0;

}   

