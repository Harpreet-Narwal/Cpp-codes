#include<bits/stdc++.h>
using namespace std;

#define ll long long


// A : Kadane's ALgorithm: Maximum Subarray Sum in an Array
/* Problem Statement: Given an integer array nums, find the subarray with the largest sum and return the sum of the elements present in that subarray.

A subarray is a contiguous non-empty sequence of elements within an array. */

class SolutionA{
    public:
        int maxSubArraySum(vector<int> &arr){
            int maxSum = INT_MIN;
            int sum = 0;

            for(int i=0; i<arr.size(); i++){
                sum += arr[i];

                if(sum > maxSum){
                    maxSum = sum;
                }

                if(sum < 0){
                    sum = 0;
                }
            }
            return maxSum;
        }

};


/* 
Sort an array of 0s, 1s and 2s

Problem Statement: Given an array nums consisting of only 0, 1, or 2. Sort the array in non-decreasing order. The sorting must be done in-place, without making a copy of the original array.
 */

class SolutionB{
    public:
        void sortZeroOneTwo(vector<int> &arr){
            int low = 0, mid = 0, high = arr.size()-1;

            while(mid <= high){
                if(arr[mid] == 0){
                    swap(arr[mid], arr[low]);
                    mid++;
                    low++;
                }

                else if(arr[mid] == 1){
                    mid++;
                }
                else{
                    swap(arr[mid], arr[high]);
                    high--;
                }
            }
        }


};


/* 
    Stock Buy And Sell

    Problem Statement: You are given an array of prices where prices[i] is the price of a given stock on an ith day. You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock. Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
 */


class SolutionC{

    public:
    int stockBuySell(vector<int>& arr){
        int maxProfit = 0;
        int minPrice = INT_MAX;

        for(int i=0; i<arr.size(); i++){
            if(arr[i] < minPrice){
                minPrice = arr[i];
            }else{
                maxProfit = max(maxProfit, arr[i] - minPrice);
            }
        }
        return maxProfit;
    }

};

int main(){
    // A:
    // vector<int> arr = {2, 3, 5, -2, 7, -4};

    // SolutionA sol;

    // int ans = sol.maxSubArraySum(arr);

    // cout<<"Maximum Subarray sum is: " << ans<< endl;

    // return 0;


    // B:
    
    // SolutionB sol;
    // vector<int> arr = {2, 0, 2, 1, 1, 0};

    // sol.sortZeroOneTwo(arr);

    // for(auto it: arr){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    // return 0;


    //C: 
    SolutionC sol;

    vector<int> arr = {7, 1, 5, 3, 6, 4};

    int ans = sol.stockBuySell(arr);

    cout<< ans<< endl;

    return 0;

}