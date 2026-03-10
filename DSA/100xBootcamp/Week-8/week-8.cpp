#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#if __cplusplus >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdalign>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#endif

// C++
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif

using namespace std;
using ll = long long;


// A: Natural Sum:
/* int main(){
    ll n;
    cin>>n;

    ll sum =( n * (n+1)) / 2;

    cout<<sum;

} */

/* // B: Interval Sum:
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, m;
        cin>>n>>m;

        ll sumTilln = (n * (n-1))/2;
        //cout<<"Sum till n: "<<sumTilln<<endl;
        ll sumTillm = (m * (m+1))/2;
        //cout<<"Sum till m: "<<sumTillm<<endl;

        cout<<sumTillm - sumTilln<<endl;
    }
} */

// C: Counting Intervals:


/* int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,l,r;
        cin>>n>>l>>r;
        if(l > r) cout<<0<<endl;
        else{
            if(n == 1){
                cout<<max(0LL, r-l-1)<<endl;
            }
            else if(n== 2){
                cout<<max(0LL, r-l)<<endl;
            }
            else if(n == 3){
                cout<<max(0LL, r-l)<<endl;
            }
            else{
                cout<<r-l+1<<endl;
            }
        }
    }
} */


// D: Counting Factors:

// int main(){
//     ll n;
//     cin>>n;
//     ll cnt = 0;
//     for(ll i=1; i * i <= n; i++){
//         if(n % i == 0){
//             cnt++;
//             if(i != n/i) cnt++;
//         }
//     }
//     cout<<cnt<<endl;
// }

// E: Am I Prime: 

// int main(){
//     ll n;
//     cin>>n;
//     int cnt = 0;
//     if(n <= 1) cout<<"NO";
//     else{
//         for(ll i=2; i*i <= n; i++){
//             if(n % i == 0){
//                 cnt++;
//             }
//         }
//         if(cnt > 0){
//             cout<<"NO";
//         }else{
//             cout<<"YES";
//         }
//     } 
//     return 0;

// }


// F: 

// int main(){
//     ll n;
//     cin>>n;

//     vector<bool> is_prime(n+1, true);
//     is_prime[0] = is_prime[1] = false;
//     for(ll i=2; i * i <= n; i++){
//         if(is_prime[i] && i*i <= n){
//             for(int j=i*i; j<= n; j+= i){
//                 is_prime[j] = false;
//             }
//         }
//     }

//     int cnt =0;
//     for(int i=0; i<is_prime.size(); i++){
//         if(is_prime[i]) cnt++;
//     }
//     cout<<cnt;


// }

// G: Print Factors:



// int main(){
//     ll n;
//     cin>>n;
//     vector<ll> arr;
//     for(ll i=1; i * i <= n; i++){
//         if(n % i == 0){
//             arr.push_back(i);
//             if(i != n/i) arr.push_back(n/i);
//         }
//     }
//     sort(arr.begin(), arr.end());
//     for(ll i=0; i<arr.size(); i++){
//         cout<<arr[i]<<" ";
//     }

// }

// H: Kth smallest:


int main(){
    ll n, k;
    cin>>n>>k;
    vector<ll> arr;
    for(ll i=1; i * i <= n; i++){
        if(n % i == 0){
            arr.push_back(i);
            if(i != n/i) arr.push_back(n/i);
        }
    }
    sort(arr.begin(), arr.end());

    if(arr.size() >= k){
        cout<<arr[k-1];
    }else{
        cout<<-1;
    }


}