// C
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
using ll = long long;
using namespace std;


// A: Range Sum Query:
// int main(){
//     int n;
//     cin>>n;

//     vector<ll> prefix(n+1, 0);

//     for(int i=1; i<=n; i++){
//         ll x;
//         cin>>x;
//         prefix[i] = prefix[i-1] + x;
//     }

//     int q;
//     cin>>q;

//     while(q--){
//         int l, r;
//         cin>>l>>r;

//         cout<<prefix[r] - prefix[l-1]<<endl;
//     }
    
// }

// B: Even sum query
// int main(){
//     int n;
//     cin>>n;
//     vector<ll> prefix(n+1, 0);

//     for(int i=1; i<=n; i++){
//         ll x;
//         cin>>x;
//         if(i % 2 == 0){
//             prefix[i] = prefix[i-1] + x;
//         }else{
//             prefix[i] = prefix[i-1];
//         }
//     }

//     int q;
//     cin>>q;

//     while(q--){
//         int l, r;
//         cin>>l>>r;

//         cout<<prefix[r] - prefix[l-1]<<endl;
//     }
    
// }


// C: Count Vowels:

// int main(){
//     int n;
//     cin>>n;

//     vector<char> arr(n);
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     int q;
//     cin>>q;
//     while(q--){
//         int l, r;
//         cin>>l>>r;
//         int cnt =0;
//         for(int i=l-1; i<r; i++){
//             char ch = arr[i];
//             if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
//                 cnt++;
//             }
//         }
//         cout<<cnt<<endl;
//     }
// }


// int main(){
//     int n;
//     cin>>n;
//     string s;
//     cin>>s;

//     vector<int> prefixCount(n+1);
//     for(int i=0; i<n; i++){
//         prefixCount[i+1] = prefixCount[i];
//         if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
//             prefixCount[i+1]++;
//         }
//     }

//     int q;
//     cin>>q;
//     while(q--){
//         int l, r;
//         cin>>l>>r;

//         cout<<prefixCount[r]-prefixCount[l-1]<<endl;
//     }

// }


// D: Range Sum of Square:

// int main(){
//     int n, q;
//     cin>>n>>q;

//     vector<ll> prefixSq(n+1, 0);
//     for(int i=1; i<=n; i++){
//         ll x;
//         cin>>x;
//         ll sq = x * x;
//         prefixSq[i] = prefixSq[i-1] + sq;
//     }

//     while(q--){
//         int l, r;
//         cin>>l>>r;

//         cout<<prefixSq[r] - prefixSq[l-1]<<endl;
//     }
// }


// E: Count number with Digit Sum k:

// int digitSum(int n){
//     int sum = 0;
//     while(n > 0){
//         sum += n % 10;
//         n /= 10;
//     }
//     return sum;
// }


// int main(){
//     int n, q, k;
//     cin>>n>>q>>k;

//     vector<int> prefixDig(n+1, 0);

//     for(int i=1; i<=n ;i++){
//         int x;
//         cin>>x;
//         if(digitSum(x) == k){
//             prefixDig[i] = prefixDig[i-1] + 1;
//         }else{
//             prefixDig[i] = prefixDig[i-1];
//         }
//     }

//     while(q--){
//         int l, r;
//         cin>>l>>r;

//         cout<<prefixDig[r] - prefixDig[l-1]<<endl;
//     }

// }


// [1, 1, 0, 1, 1] --> [1, 2, 2, 3, 4]
// [1, 3] -> arr[r-1] -  -> 2
// [2, 5] --> arr[r-1]


// F: Count numbers with exactly K factors:

int fact(int n){
    int cnt = 0;

    for(int i=1; i*i <= n; i++){
        if(n % i == 0){
            cnt++;
            if(i != n/i) cnt++;
        }
    }

    return cnt;

}


int main(){
    int n, q, k;
    cin>>n>>q>>k;

    vector<int> arr(n+1, 0);

    for(int i=1; i<= n; i++){
        int x;
        cin>>x;

        int factors = fact(x);
        if(factors == k){
            arr[i] = arr[i-1] + 1;
        }else{
            arr[i] = arr[i-1];
        }
    }

    while(q--){
        int l, r;
        cin>>l>>r;

        cout<<arr[r] - arr[l-1]<<endl;
    }


}