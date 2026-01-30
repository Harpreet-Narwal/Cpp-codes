#include<bits/stdc++.h>
#include<iostream>

using namespace std;

class Solution{
    public:

    vector<int> search(string pat, string txt){
        int n = pat.length();
        int m = txt.length();

        vector<int> ans;

        for(int i=0; i<= m-n; i++){
            bool flag = true;

            for(int j=0; j<n; j++){
                if(txt[i+j] != pat[j]){
                    flag = false;
                    break;
                }
            }
            if(flag){
                ans.push_back(i);
            }
        }

        return ans;
    }
};


int main(){
    string txt = "ababcabcababc";
    string pat = "abc";

    Solution sol;

    vector<int> ans = sol.search(pat, txt);

    cout<<" The starting indices of all occureneces of "<<pat << " in " << txt << " are: ";
    for(auto it: ans){
        cout<< it << " ";
    }

    return 0;

}