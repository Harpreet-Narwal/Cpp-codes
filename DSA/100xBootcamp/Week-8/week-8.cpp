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

int main(){
    ll n;
    cin>>n;
    ll cnt = 0;
    for(ll i=1; i * i <= n; i++){
        if(n % i == 0){
            cnt++;
            if(i != n/i) cnt++;
        }
    }
    cout<<cnt<<endl;
}