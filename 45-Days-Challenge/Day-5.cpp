#include<bits/stdc++.h>
using namespace std;

class SolutionA{
    public:

    double power(double x, long long n){
        if(n ==0) return 1.0;

        if(n == 1) return x;

        if(n % 2 == 0){
            return power(x * x, n/2);
        }

        return x * power(x, n-1);
    }


    double myPow(double x, int n){
        long long num = n;

        if(num < 0){
            return (1.0/power(x, -num));
        }
        
        return power(x, num);

    }

};


class SolutionB{
    public:

    int majorityElement(vector<int> &arr){
        int n = arr.size();

        int cnt = 0;

        int el;

        for(int i=0; i<n; i++){
            if(cnt == 0){
                cnt = 1;
                el = arr[i];
            }else if(el == arr[i]){
                cnt++;
            }else{
                cnt--;
            }
        }

        int cnt1 = 0;

        for(int i=0; i<n; i++){
            if(arr[i] == el){
                cnt++;
            }
        }

        if(cnt > (n/2)){
            return el;
        }

        return -1;

    }

};


class SolutionC{
    public:

    bool searchMatrix(vector<vector<int>> &mat, int target){
        int n = mat.size();
        int m = mat[0].size();

        int low = 0, high = n*m-1;

        while(low <= high){
            int mid = (low + high)/2;

            int row = mid/m, col = mid % m;

            if(mat[row][col] == target) return true;
            else if(mat[row][col] < target) low = mid+1;
            else high = mid-1;
        }

        return false;

    }

};


int main(){

    // A: 
    // SolutionA sol;

    // cout<<sol.myPow(2.0, 10)<<endl;

    // return 0;


    // B: 

    // vector<int> arr = {7, 0, 0, 1, 7, 7, 2, 7, 7};

    // SolutionB sol;

    // int ans = sol.majorityElement(arr);

    // cout<<ans<<endl;

    // return 0;


    // C:
    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int target = 8;

    SolutionC sol;

    bool result = sol.searchMatrix(matrix, target);

    result ? cout<<"true\n" : cout<<"false\n";

    return 0;
}