#include<bits/stdc++.h>
#include<iostream>

using namespace std;


class Solution{
    public:
    string reverseWord(string s){
        int n = s.length();
        vector<string> list;

        int start, end;

        int i = 0;

        while(i < n){
            while(i < n && s[i] == ' ') i++;
            if(i >= n) break;
            start = i;

            while(i<n && s[i] != ' ') i++;
            end = i-1;

            list.push_back(s.substr(start, end-start+1));
        }

        string ans = "";

        for(int ind = list.size()-1; ind>= 0; ind--){
            ans += list[ind];
            if(i != 0) ans.push_back(' ');
        }

        return ans;
    }

};


int main(){
    string s = " welcome to the jungle";

    Solution sol;

    string ans = sol.reverseWord(s);

    cout<<"Input String: " << s << endl;

    cout<<"After reveresing every word: "<< ans << endl;
}