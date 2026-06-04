#include<bits/stdc++.h>
using namespace std;

class SolutionA{
    public:
    int findDuplicate(vector<int>& nums) {

        int slow = nums[0];
        int fast = nums[0];

        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow != fast);

        fast = nums[0];

        while(slow != fast){
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;
    }

};


class SolutionB {
public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums) {
        int n = nums.size();

        vector<int> freq(n+1, 0);

        for(int i=0; i<n; i++){
            freq[nums[i]]++;
        }

        int missing = -1, duplicate = -1;

        for(int i=1; i<=n; i++){
            if(freq[i] == 2){
                duplicate = i;
            }else if(freq[i] == 0){
                missing = i;
            }

            if(duplicate != -1 && missing != -1) break;

        }
        return {duplicate, missing};
    }
};


class SolutionC {
public:
    long long int merge(vector<int> &arr, int low, int mid, int high){
        vector<int> temp;

        int left = low;
        int right = mid+1;

        long long int cnt = 0;

        while(left <= mid && right <= high){
            if(arr[left] <= arr[right]){
                temp.push_back(arr[left]);
                left++;
            }
            else{
                temp.push_back(arr[right]);
                cnt += (mid-left+1);
                right++;
            }
        }

        while(left <= mid){
            temp.push_back(arr[left]);
            left++;
        }

        while(right <= high){
            temp.push_back(arr[right]);
            right++;
        }

        for(int i=low; i<= high; i++){
            arr[i] = temp[i-low];
        }

        return cnt;
    }

    long long int mergeSort(vector<int> &arr, int low, int high){
        long long int cnt = 0;

        if(low < high){
            int mid = low + (high-low)/2;

            cnt += mergeSort(arr, low, mid);

            cnt += mergeSort(arr, mid+1, high);

            cnt += merge(arr, low, mid, high);
        }

        return cnt;

    }

   long long int numberOfInversions(vector<int> nums) {
        int n = nums.size();

        return mergeSort(nums, 0, n-1);
    }
};



int main(){

    // SolutionA sola;
    // vector<int> nums = {1,3,4,2,2};

    // cout<<sola.findDuplicate(nums)<<endl;

    // return 0;


    // vector<int> nums = {3, 1, 2, 5, 4, 6, 7, 5};
    
    // SolutionB sol;

    // vector<int> result = sol.findMissingRepeatingNumbers(nums);
    
    // cout << "The repeating and missing numbers are: {" << result[0] << ", " << result[1] << "}\n";
    
    // return 0;


    vector<int> nums = {5, 4, 3, 2, 1};
    
    SolutionC sol;

    long long result = sol.numberOfInversions(nums);
    
    cout << "The number of inversions are: " << result << endl;
    
    return 0;


}