#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
    public: 
    vector<int> primeTillN(int n){
        vector<int> isPrime(n+1, 1);
        vector<int> ans;

        for(ll i=2; i<=n;i++){
            if(isPrime[i]){
                ans.push_back(i);
                for(ll j = i*i; j<=n; j += i){
                    isPrime[j] = false;
                }
            }
        }
        return ans;
    }
};


int main(){
    int n;
    cin>>n;

    Solution sol;

    vector<int> ans = sol.primeTillN(n);
    
    cout<< "All primes till N are: " <<endl;

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}
