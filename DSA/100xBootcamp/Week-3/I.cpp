#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int hcf(int a, int b){
    if(b==0){
        return a;
    }

    return hcf(b, a%b);
}

int main(){

    int n, m;
    cin>>n>>m;

    cout<<hcf(n,m);

    return 0;

}
