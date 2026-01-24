#include<bits/stdc++.h>
#include<iostream>
using namespace std;


class Solution{

    public:
    int countRev(string &s){
        if(s.size() % 2) return -1;

        int open = 0, close = 0;

        for(int i=0; i<s.size(); i++){
            if(s[i] == '('){
                open++;
            }else{
                if(open>0) open--;
                else close++;
            }
        }

        int ans = (open/2) + (open%2) + (close/2) + (close%2);

        return ans;

        
    }

};


int main(){

    string s = ")(())(((";

    Solution sol;
    
    int ans = sol.countRev(s);

    cout<<"The minimum number of reversal required are: "<<ans<<endl;

    return 0;

}