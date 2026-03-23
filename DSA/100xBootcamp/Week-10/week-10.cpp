#include<bits/stdc++.h>
using namespace std;

// A: Count Distinct:

// int main(){
//     int n;
//     cin>>n;

//     vector<int> arr(n);
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     unordered_set<int> st;
//     for(int it : arr){
//         st.insert(it);
//     }

//     cout<<st.size()<<endl;

//     return 0;

// }


// B: Search Queries - III:

// int main(){
//     int n, q;
//     cin>>n>>q;
    
//     vector<int> arr(n);
//     unordered_map<int, int> mpp;

//     for(int i=0; i<n ;i++){
//         cin>>arr[i];
//     }

//     for(int i=0; i<n; i++){
//         mpp.insert({arr[i], i+1});
//     }

//     while(q--){
//         int a;
//         cin>>a;
//         auto it = mpp.find(a);
//         if(it != mpp.end()){
//             cout<<it->second<<"\n";
//         }else{
//             cout<<-1<<"\n";
//         }
//     }

// }


// C: Count Distinct Queries:

int main(){
    int n;
    cin>>n;

    unordered_map<int, int> mpp;

    while(n--){
        int n;
        cin>>n;

        if(n == 1){
            int x;
            cin>>x;
            mpp[x]++;
        }

        if(n==2){
            int x;
            cin>>x;
            mpp.erase(x);
        }

        if(n==3){
            cout<<mpp.size()<<"\n";
        }

        if(n == 4){
            int x;
            cin>>x;
            if(mpp.find(x) != mpp.end()){
                cout<<"YES"<<"\n";
            }else{
                cout<<"NO"<<"\n";
            }
        }

    }
}


// D: Count Distinct Queries-II
int main(){
    int n;
    cin>>n;

    unordered_map<int, int> mpp;

    while(n--){
        int n;
        cin>>n;

        if(n == 1){
            int x;
            cin>>x;
            mpp[x]++;
        }

        if(n==2){
            int x;
            cin>>x;
            if(mpp.find(x) != mpp.end()){
                mpp[x]--;
                if(mpp[x] == 0){
                    mpp.erase(x);
                }
            }
        }

        if(n==3){
            cout<<mpp.size()<<"\n";
        }

        if(n == 4){
            int x;
            cin>>x;
            if(mpp.find(x) != mpp.end()){
                cout<<"YES"<<"\n";
            }else{
                cout<<"NO"<<"\n";
            }
        }

    }
}