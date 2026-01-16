#include<bits/stdc++.h>
#include<iostream>
using namespace std;



class Solution{

// MEMOIZATION:

    public:
    // int fun(int i, int j, vector<int> &cuts, vector<vector<int>> &dp){
    //     if(i > j) return 0;
        
    //     if(dp[i][j] != -1) return dp[i][j];

    //     int mini = INT_MAX;

    //     for(int ind = i; ind<= j; ind++){
    //         int ans = cuts[j+1] - cuts[i-1] + fun(i, ind-1, cuts, dp) + fun(ind+1, j, cuts, dp);
    //         mini = min(ans, mini);
    //     }

    //     return dp[i][j] = mini;
    // }
        
    
    // int minCostUsingMemo(int n, vector<int> &cuts){
    //     int c = cuts.size();
    //     cuts.push_back(n);
    //     cuts.insert(cuts.begin(), 0);
    //     sort(cuts.begin(), cuts.end());

    //     vector<vector<int>> dp(c+1, vector<int>(c+1, -1));

    //     return fun(1, c, cuts, dp);
    // }

// TABULATION:

    int minCostUsingTabulation(int n, vector<int> cuts){
			int c = cuts.size();
			cuts.push_back(n);
			cuts.insert(cuts.begin(), 0);
			sort(cuts.begin(), cuts.end());

			vector<vector<int>> dp(c+2, vector<int> (c+2, 0));

			for(int i=c; i>= 1; i--){
				for(int j=1; j<=c; j++){
					if(i>j)continue;

					int mini = INT_MAX;
					for(int ind=i; ind<=j; ind++){
						int ans = cuts[j+1] - cuts[i-1] + dp[i][ind-1] + dp[ind+1][j];

						mini = min(ans, mini);
					}

					dp[i][j] = mini;
				}
			}

			return dp[1][c];

    }

};


int main(){
    vector<int> cuts = {3, 5, 1, 4};
    int  n = 7;

    Solution sol;

    //cout<<"The minimum cost incurred is: " <<sol.minCostUsingMemo(n, cuts)<<endl;
    cout<<"The minimum Cost incurred is: " <<sol.minCostUsingTabulation(n, cuts)<<endl;
    
    return 0;
}