#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Solution{
public:
    int longestBitonicSubsequence(vector<int> &arr){
        int n  = arr.size();
        vector<int> dp1(n, 1);

        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                if(arr[i] > arr[j] && dp1[j] + 1 > dp1[i]){
                    dp1[i] = dp1[j] + 1;
                }
            }
        }

        vector<int> dp2(n, 1);
        int maxi = 0;
        for(int i=n-1; i>= 0; i--){
            for(int j=n-1; j> i; j--){
                if(arr[i] > arr[j] && dp2[i] < dp2[j] + 1){
                    dp2[i] = dp2[j] + 1;
                }
            }
            maxi = max(maxi, dp1[i] + dp2[i] -1);
        }
        return maxi;
    }


};

int main(){

    vector<int> arr = {5, 1, 4 , 2, 3, 6, 8, 7};

    Solution sol;

    int lengthOfLongestBitonicSubsequence = sol.longestBitonicSubsequence(arr);

    cout<<" The length of the longest Bitonic Subsequence is: " << lengthOfLongestBitonicSubsequence;

    cout<<endl;

    return 0;

}