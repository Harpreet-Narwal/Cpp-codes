// #include <algorithm>
// #include <bitset>
// #include <complex>
// #include <deque>
// #include <exception>
// #include <fstream>
// #include <functional>
// #include <iomanip>
// #include <ios>
// #include <iosfwd>
// #include <iostream>
// #include <istream>
// #include <iterator>
// #include <limits>
// #include <list>
// #include <locale>
// #include <map>
// #include <memory>
// #include <new>
// #include <numeric>
// #include <ostream>
// #include <queue>
// #include <set>
// #include <sstream>
// #include <stack>
// #include <stdexcept>
// #include <streambuf>
// #include <string>
// #include <typeinfo>
// #include <utility>
// #include <valarray>
// #include <vector>

// #if __cplusplus >= 201103L
// #include <array>
// #include <atomic>
// #include <chrono>
// #include <condition_variable>
// #include <forward_list>
// #include <future>
// #include <initializer_list>
// #include <mutex>
// #include <random>
// #include <ratio>
// #include <regex>
// #include <scoped_allocator>
// #include <system_error>
// #include <thread>
// #include <tuple>
// #include <typeindex>
// #include <type_traits>
// #include <unordered_map>
// #include <unordered_set>
// #endif
#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    for(char &c : s){
        if(c == '.' || c == ','){
            c = ' ';
        }
    }
    transform(s.begin(), s.end(), s.begin(), ::toupper);

    istringstream stream(s);
    map<string, int> ans;
    string word;

    while(stream >> word){
        ans[word]++;
    }
    for(auto it: ans){
        if(it.second >=2){
            cout<<it.second<<endl;
            cout<<it.first<<endl;
        }
    }
    return 0;
}
