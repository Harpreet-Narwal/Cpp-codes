#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;


// A: Char to ASCII:
// int main(){
//     char c;
//     cin>>c;

//     cout<< (int)c;
//     return 0;
// }

// B: Ascii To Char:

// int main(){
//     int c;
//     cin>>c;

//     cout<< char(c);
//     return 0;
// }


// C: Lowercase, Uppercase, Digit or Special:

// int main(){
//     char c;
//     cin>>c;

//     if(c >= 'a' && c <= 'z'){
//         cout<<"Lowercase";
//     }else if(c >= 'A' && c <= 'Z'){
//         cout<<"Uppercase";
//     }else if(c >= '0' && c <= '9'){
//         cout<<"Digit";
//     }else{
//         cout<<"Special";
//     }

//     return 0;
// }


// D: Convert to lowercase:

// int main(){
//     char c;
//     cin>>c;

//     cout<<(char)tolower(c);

//     return 0;
// }

// E: Brothers:

// int main(){
//     string a1, a2;
//     string b1, b2;
//     cin>>a1>>a2 >> b1>>b2;


//     if(a2 == b2){
//         cout<<"YES";
//     }else{
//         cout<<"NO";
//     }
// }


// F: Lexicographical Order:

// int main(){
//     string a, b;

//     cin>>a>>b;

//     for(int i=0; i<min(a.length(), b.length()); i++){
//         if(a[i] < b[i]){
//             cout<<"A";
//             return 0;
//         }else if(a[i] > b[i]){
//             cout<<"B";
//             return 0;
//         }
//     }
//     if(a.length() < b.length()){
//         cout<<"A";
//     }else if(a.length() > b.length()){
//         cout<<"B";
//     }
//     else{
//         cout<<"Equal";
//     }
//     return 0;
// }


// G: Replace Character:

// int main(){
//     string a;
//     char c1 ,c2;

//     cin>>a;
//     cin>>c1>>c2;

//     for(int i=0; i<a.length(); i++){
//         if(a[i] == c1){
//             a[i] = c2;
//         }
//     }

//     cout<<a;

// }


// H: Remove Character:



// int main(){
//     string a;
//     char c;

//     cin>>a;
//     cin>>c;
//     string ans = "";

//     for(int i=0; i<a.length(); i++){
//         if(a[i] != c){
//             ans += a[i];
//         }
//     }

//     cout<<ans<<endl;

// }


// I: Trim Spaces:

// int main(){
//     string s;

//     getline(cin, s);

//     s.erase(remove(s.begin(), s.end(), ' '), s.end());

//     cout<<s<<endl;

//     return 0;
// }

// Alternatively:
// int main(){
//     string s;

//     getline(cin, s);

//     string result = "";

//     for(auto c : s){
//         if(c != ' '){
//             result += c;
//         }
//     }
//     cout<<result;
//     return 0;
// }



// J : Toggle Case:


// int main(){
//     string s;
//     cin>>s;

//     for(int i=0; i<s.length(); i++){
//         if(s[i] >= 'a' && s[i] <= 'z'){
//             s[i] = (char)toupper(s[i]);
//         }else{
//             s[i] = (char)tolower(s[i]);
//         }
//     }

//     cout<<s<<endl;

// }


// K: Strong Password:

// int main(){
//     string s;
//     cin>>s;

//     if(s.length() == 10){
//        bool isLower = false;
//        bool isUpper = false;
//        bool isSpecial = false;
//        bool isDigit = false;
//        for(int i=0; i < s.length(); i++){
//             if(s[i] >= 'a' && s[i] <='z'){
//                 isLower = true;
//             }else if(s[i] >= 'A' && s[i] <= 'Z'){
//                 isUpper = true;
//             }else if(s[i] >= '0' && s[i] <= '9'){
//                 isDigit = true;
//             }
//             else{
//                 isSpecial = true;
//             }
//        }
//        if(isLower && isUpper && isSpecial && isDigit){
//         cout<<"Strong";
//         return 0;
//        } 
//     }
//     cout<<"Weak"<<endl;
//     return 0;
// }


// L: Reverse:

// int main(){
//     string s;
//     cin>>s;

//     reverse(s.begin(), s.end());
//     cout<<s;
//     return 0;
// }

// M: Palindrome:


// int main(){
//     string s;
//     cin>>s;

//     bool isPalindrome = true;

//     for(int i=0; i<=s.length()/2; i++){
//         if(s[i] != s[s.length()-i-1]){
//             isPalindrome = false;

//         }
//     }

//     if(isPalindrome){
//         cout<<"YES";
//     }else{
//         cout<<"NO";
//     }

//     return 0;
// }


// N: Count Words

int main(){
    string s;

    getline(cin, s);

    int cnt = 1;

    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){
            cnt++;
        }
    }

    cout<<cnt;

    return 0;
   
}